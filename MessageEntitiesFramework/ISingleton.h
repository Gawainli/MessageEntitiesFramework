#ifndef ISingleton_h__
#define ISingleton_h__

#include <assert.h>

template <typename T> class Singleton
{
	static T* m_singleton;
public:
	Singleton()
	{
		assert( !m_singleton );
#if defined(_MSC_VER)&&_MSC_VER<1200 //In newer compiler, the pointer "this" will be adjusted when cast.
		int offset = (int)(T*)1 - (int)(Singleton<T>*)(T*)1;
		m_singleton = (T*)( (int)this + offset );
#else
		m_singleton = (T*)(this);
#endif
	}
	~Singleton()
	{
		assert( m_singleton );
		m_singleton = 0;
	}

public:
	static T& getSingleton()
	{
		assert(m_singleton);
		return (*m_singleton);
	}

	static T* getSingletonPtr()
	{
		assert(m_singleton);
		return m_singleton;
	}
};

template <typename T>T* Singleton <T>::m_singleton = 0;
#endif // ISingleton_h__
