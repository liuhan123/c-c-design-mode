#ifndef _SUBJECT_H
#define _SUBJECT_H
#include <list>
#include <iostream>
using namespace std;

//π€≤Ï’ﬂ
class IKObserver
{
public:
	virtual void update(int state) = 0;
};

class ConcreteObserver : public IKObserver
{
public:
	void update(int state)
	{
		cout << "ConcreteObserver get the update, new state:" << state << endl;
	}
};

class ConcreteObserver1 : public IKObserver
{
public:
	void update(int state)
	{
		cout << "ConcreteObserver1 get the update, new state:" << state << endl;
	}
};

class Subject
{
public:
	virtual void attach(IKObserver* pObserver) = 0;
	virtual void detach(IKObserver* pObserver) = 0;
	virtual void Notify() = 0;
};

class ConcreteSubject: public Subject
{
public:
	void attach(IKObserver* pObserver);
	void detach(IKObserver* pIKObserver);
	void Notify();
	void setState(int state);

private:
	list<IKObserver*> m_listObserver;
	int m_state;
};







#endif