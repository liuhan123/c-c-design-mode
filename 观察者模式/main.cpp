#include <iostream>
#include "subject.h"

using namespace std;

int main()
{
	IKSubject* pLukeSubject = new LukeSubject();
	IKObserver* pFantacyLiuObserver = new FantacyLiuServer("haisewei", pLukeSubject);
	IKObserver* pFantacyHanObserver = new FantacyHanServer("linda", pLukeSubject);

	pLukeSubject->attach(pFantacyLiuObserver);
	pLukeSubject->attach(pFantacyHanObserver);
	pLukeSubject->sAction = ("���������");
	pLukeSubject->notify();

	return 0;
}