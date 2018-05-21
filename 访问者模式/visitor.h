#ifndef _TENCENT_H
#define _TENCENT_H
#include <iostream>
using namespace std;

class BellTower;
class TerracottaWarriors;

class IKVisitor
{
public:
	~IKVisitor(){};
	virtual void visit(BellTower* pBellTower) = 0;
	virtual void visit(TerracottaWarriors* pTerracottaWarriors) = 0;
};


class Tourist : public IKVisitor
{
public:

	Tourist(){}
	~Tourist(){}
	void visit(BellTower* pBellTower)
	{
		cout << "我是游客 我去钟楼玩" << endl;
	}
	void visit(TerracottaWarriors* pTerracottaWarriors)
	{
		cout << "我是游客，我去长城玩" << endl;
	}
};

class Cleaner : public IKVisitor
{
public:

	Cleaner(){}
	~Cleaner(){}
	void visit(BellTower* pBellTower)
	{
		cout << "我去打扫钟楼" << endl;
	}

	void visit(TerracottaWarriors* pTerracottaWarriors)
	{
		cout << "我去打扫长城" << endl;
	}
};
#endif
