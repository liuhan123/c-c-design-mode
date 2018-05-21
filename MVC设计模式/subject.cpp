#include "subject.h"
#include <iostream>
using namespace std;

void ConcreteSubject::attach(IKObserver* pIKObserver)
{
	m_listObserver.push_back(pIKObserver);
}

void ConcreteSubject::detach(IKObserver* pIKObserver)
{
	m_listObserver.remove(pIKObserver);
}

void ConcreteSubject::Notify()
{
	for (auto iter = m_listObserver.begin(); iter != m_listObserver.end(); iter++)
	{
		(*iter)->update(m_state);
	}
}

void ConcreteSubject::setState(int state)
{
	m_state = state;
}


