#include "place.h"
#include <iostream>
using namespace std;

//��¥
class BellTower :public IKPlace
{
	void accept(IKVisitor* pVisitor)
	{
		cout << "��¥���ܷ���" << endl;
		pVisitor
	}
};