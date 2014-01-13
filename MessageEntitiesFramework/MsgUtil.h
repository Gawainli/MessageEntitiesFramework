#ifndef MsgUtil_h__
#define MsgUtil_h__

#include "common.h"

class MsgUtil
{
public:
	typedef union 
	{
		unsigned int	value;

		struct
		{
			unsigned int msgID:8;
			unsigned int insId:24;
		};

	}msgInfo;

// 	static unsigned int genMsg( int msgID, int msgDataID, int insID )
// 	{
// 		msgInfo msg;
// 		msg.insId = insId;
// 		msg.msgDataID = msgDataID;
// 		msg.msgID = msgID;
// 		return msg.value;
// 	}
};

typedef std::function<void (int, int, int)> msghandler;

#define MSGHANDLER(x) std::bind( &x, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3 )

#endif //MsgUtil_h__
