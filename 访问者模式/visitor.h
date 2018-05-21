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
		cout << "�����ο� ��ȥ��¥��" << endl;
	}
	void visit(TerracottaWarriors* pTerracottaWarriors)
	{
		cout << "�����οͣ���ȥ������" << endl;
	}
};

class Cleaner : public IKVisitor
{
public:

	Cleaner(){}
	~Cleaner(){}
	void visit(BellTower* pBellTower)
	{
		cout << "��ȥ��ɨ��¥" << endl;
	}

	void visit(TerracottaWarriors* pTerracottaWarriors)
	{
		cout << "��ȥ��ɨ����" << endl;
	}
};
#endif
