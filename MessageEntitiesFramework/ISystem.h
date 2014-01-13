#ifndef ISystem_h__
#define ISystem_h__

#include "ErrorCode.h"
#include "IGaObject.h"

class ISystem : public IGaObject
{
public:
	ISystem();
	virtual ~ISystem();
	virtual ErrorCode Setup() = 0;
	virtual ErrorCode Shutdown() = 0;


private:
};
#endif // ISystem_h__
