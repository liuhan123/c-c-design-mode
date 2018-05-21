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

//��¥W
class BellTower :public IKPlace
{
public:
	void accept(IKVisitor* pVisitor)
	{
		cout << "��¥���ܷ���" << endl;
		pVisitor->visit(this);
	}
};

class TerracottaWarriors :public IKPlace
{
public:
	void accept(IKVisitor* pVisitor)
	{
		cout << "���ǽ��ܷ���" << endl;
		pVisitor->visit(this);
	}
};
#endif
