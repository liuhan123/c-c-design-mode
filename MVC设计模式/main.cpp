#include <iostream>
#include "subject.h"
using namespace std;

int main()
{
	ConcreteSubject* pConcreteSubject = new ConcreteSubject();
	IKObserver* pConcreteObserver = new ConcreteObserver();
	IKObserver* pConcreteObserver1 = new ConcreteObserver1();

	pConcreteSubject->attach(pConcreteObserver);
	pConcreteSubject->attach(pConcreteObserver1);

	pConcreteSubject->setState(2);
	pConcreteSubject->Notify();

	pConcreteSubject->detach(pConcreteObserver1);
	pConcreteSubject->setState(3);
	pConcreteSubject->Notify();

	return 0;
}