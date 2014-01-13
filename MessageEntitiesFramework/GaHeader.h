#ifndef MacroDef_h__
#define MacroDef_h__

#define MACRO2STR(x)	#x
#define SAFEDELETE(x)		if(x) delete x; x = 0;
#define SAFEDELETEARRAY(x)		if(x) delete[]x; x = 0;

#include "ErrorCode.h"
#include "IGaObject.h"
#include "IFactory.h"
#include "ISingleton.h"
#include "ISystem.h"
#include "MsgUtil.h"
#include "MsgCenter.h"
#include "GaSystem.h"


#endif // MacroDef_h__
