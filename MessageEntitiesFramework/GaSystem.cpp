#include "common.h"
#include "GaHeader.h"
#include "GaSystem.h"

GaSystem::GaSystem()
:m_mainMsgCenter(0)
{

}

GaSystem::~GaSystem()
{
}

ErrorCode GaSystem::Setup()
{
	if ( !m_mainMsgCenter )
	{
		m_mainMsgCenter = new MsgCenter;
	}


	return 0;
}

MsgCenter* GaSystem::GetMsgCenter() const
{
	assert(m_mainMsgCenter);
	return m_mainMsgCenter;
}

ErrorCode GaSystem::Shutdown()
{
	SAFEDELETE(m_mainMsgCenter);
	
	return 0;
}
