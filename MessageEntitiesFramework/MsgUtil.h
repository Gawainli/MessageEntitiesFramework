#ifndef MsgUtil_h__
#define MsgUtil_h__

#include <functional>

class MsgUtil
{
public:
	typedef union 
	{
		unsigned int	value;

		struct
		{
			unsigned int groupId:8;//255
			unsigned int stateId:8;//255
			unsigned int insId:16;//65535
		};

	}msgInfo;

	static unsigned int genMsg( int targetGid, int insId, int msgTypeId )
	{
		msgInfo msg;
		msg.groupId = targetGid;
		msg.insId = insId;
		msg.stateId = msgTypeId;
		return msg.value;
	}

	static unsigned int genMsg( int targetGid, int msgTypeId )
	{
		msgInfo msg;
		msg.groupId = targetGid;
		msg.insId = 0;
		msg.stateId = msgTypeId;
		return msg.value;
	}

};

typedef std::function<void (int, int, int)> msghandler;

#define MSGHANDLER(x) std::bind( &x, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3 )

#endif //MsgUtil_h__
