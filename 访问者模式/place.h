#ifndef _PLACE_H
#define _PLACE_H
#include "visitor.h"

#include <iostream>
using namespace std;

class IKPlace
{
public:
	IKPlace(){}
	virtual ~IKPlace(){}
	virtual void accept(IKVisitor* pVisitor) = 0;
};

//钟楼W
class BellTower :public IKPlace
{
public:
	void accept(IKVisitor* pVisitor)
	{
		cout << "钟楼接受访问" << endl;
		pVisitor->visit(this);
	}
};

class TerracottaWarriors :public IKPlace
{
public:
	void accept(IKVisitor* pVisitor)
	{
		cout << "长城接受访问" << endl;
		pVisitor->visit(this);
	}
};
#endif
