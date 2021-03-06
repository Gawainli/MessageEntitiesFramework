#ifndef MsgHandler_h__
#define MsgHandler_h__

class MsgCenter
{
public:
	MsgCenter(){}
	virtual ~MsgCenter(){}

	void rigisterHandler( int msgtype, msghandler handler )
	{
		handlerMapbyMsgType::iterator it;
		it = m_handlers.find( msgtype );
		if ( it == m_handlers.end() )
		{
			m_handlers.insert( handlerMapbyMsgType::value_type( msgtype, handler ) );
		}
	}

	void processMsg( int msgID, int var1, int var2 )
	{
		handlerMapbyMsgType::iterator it;
		pair<handlerMapbyMsgType::iterator, handlerMapbyMsgType::iterator> ret;
		ret = m_handlers.equal_range( msgID );

		for ( it = ret.first; it != ret.second; ++it )
		{
 			it->second( msgID, var1, var2 );
 		}
	}

	void pushMsg();

public:
	typedef std::multimap<int, msghandler> handlerMapbyMsgType;
	handlerMapbyMsgType m_handlers;
};


#endif // MsgHandler_h__
