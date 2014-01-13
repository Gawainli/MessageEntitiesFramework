#ifndef GaSystem_h__
#define GaSystem_h__

//#include "ISingleton.h"
class MsgCenter;
 
class GaSystem : public Singleton<GaSystem>
{
public:
	GaSystem();
	~GaSystem();
	
	ErrorCode Setup();
	ErrorCode Shutdown();

	MsgCenter* GetMsgCenter() const;


private:
	MsgCenter	*m_mainMsgCenter;

};
#endif // GaSystem_h__
