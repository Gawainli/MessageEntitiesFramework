#include "commonh.h"
#include "MsgCenter.h"
#include "ISingleton.h"
#include "MainMsgDisp.h"


MainMsgDisp::MainMsgDisp()
{
 	MsgCenter::getSingleton().rigisterHandler( 0, MSGHANDLER(MainMsgDisp::dispMsgHandler) );
}

MainMsgDisp::~MainMsgDisp()
{

}

void MainMsgDisp::dispMsgHandler( int msg, int var1, int var2 )
{
	cout<<"dispmsg: "<<msg<<endl;
}

