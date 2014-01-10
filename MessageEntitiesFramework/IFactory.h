#ifndef IFactory_h__
#define IFactory_h__

template <typename T> class Factory
{
public:
	Factory(){}
	virtual ~Factory(){}
	virtual T* create() = 0;

protected:
private:
};
#endif // IFactory_h__
