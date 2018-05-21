#ifndef _SUBJECT_H
#define _SUBJECT_H

#include <iostream>
#include <string>
#include <list>
using namespace std;

class IKSubject;
class IKObserver
{
public:
	IKObserver(string name, IKSubject* pIKSubject)
	{
		m_Name = name;
		m_pIKSubject = pIKSubject;
	}

	virtual void update() = 0;

public:
	string m_Name;
	IKSubject* m_pIKSubject;
};

//通知接口
class IKSubject
{
public:

	virtual void attach(IKObserver* pIKObserver) = 0;
	virtual void detach(IKObserver* pIKObserver) = 0;
	virtual void notify() = 0;

public:
	string sAction;
};

class FantacyLiuServer : public IKObserver
{
public:
	FantacyLiuServer(string name, IKSubject* pIKSubject)
		:IKObserver(name, pIKSubject)
	{

	}
	~FantacyLiuServer()
	{

	}
	void update()
	{
		if (m_pIKSubject->sAction == "刘寒结婚了")
		{
			cout << "我是" << m_Name << " 祝福他" << endl;
		}
	}
};

class FantacyHanServer : public IKObserver
{
public:
	FantacyHanServer(string name, IKSubject* pIKSubject)
		:IKObserver(name, pIKSubject)
	{

	}
	~FantacyHanServer()
	{

	}
	void update()
	{
		if (m_pIKSubject->sAction == "刘寒结婚了")
		{
			cout << "我是"<< m_Name<<" 祝福他" << endl;
		}
	}
};

//具体通知者
class LukeSubject : public IKSubject
{
public:
	void attach(IKObserver* pIKObserver)
	{
		m_ListIKObserver.push_back(pIKObserver);
	}

	void detach(IKObserver* pIKObserver)
	{
		m_ListIKObserver.remove(pIKObserver);
	}

	void notify()
	{
		for (auto iter = m_ListIKObserver.begin(); iter != m_ListIKObserver.end(); iter++)
		{
			(*iter)->update();
		}
	}
private:
	list<IKObserver*> m_ListIKObserver;
};


#endif // !1
