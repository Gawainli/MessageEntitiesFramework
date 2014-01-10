#include <iostream>

#include "commonh.h"
#include "MsgCenter.h"
#include "MainMsgDisp.h"
using namespace std;

union
{
	unsigned int v;
	struct  
	{
		int a : 16;
		int b : 16;
	};
	
}c;


struct  
{
	int a;
	char b;
}d;


typedef std::function<void (int)> fp;

class A
{
public:
	A()
	{
		fp func = std::bind( &A::printA, this, std::placeholders::_1 );
		func(1);
	}
	void printA( int a )
	{
		cout<<"A:"<<a<<endl;
	}
protected:
private:
};

class B:public MainMsgDisp
{
public:

	int bbb;
protected:
private:
};

void g_testfunc()
{
	cout<<"g_testfunc"<<endl;
}


MsgCenter msgcenter;
MainMsgDisp msgdisp;

int main()
{
	fp ff= std::bind(&g_testfunc);

	MsgCenter::getSingleton().sendMsg( 0, 1, 2 );
	return 0;
}