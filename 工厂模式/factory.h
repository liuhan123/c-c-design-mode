#ifndef _FACTORY_H
#define _FACTORY_H

typedef enum OPreationType
{
	addOPreation = 0,
	subOPreation
}OPreationType;


template <class T>
class IKOPeration
{
public:
	void setNumberA(T number)
	{
		m_NumberA = number;
	}

	int getNumberA()
	{
		return m_NumberA;
	}

	void setNumberB(T number)
	{
		m_NumberB = number;
	}

	int getNumberB()
	{
		return m_NumberB;
	}

	virtual T getResult()
	{
		T result = 0;
		return result;
	}
private:
	T m_NumberA;
	T m_NumberB;

};

template<class T>
class AddOperation :public IKOPeration<T>
{
public:
	virtual T getResult()
	{
		return IKOPeration::getNumberA() + IKOPeration::getNumberB();
	}
};

template<class T>
class SubOperation :public IKOPeration<T>
{
public:
	virtual T getResult()
	{
		return IKOPeration::getNumberA() - IKOPeration::getNumberB();
	}

};

template<class T>
class Factory
{
public:

	Factory()
	{

	}
	IKOPeration<T>* getOPreation(OPreationType type)
	{
		IKOPeration<T>* pIKOPeration = NULL;
		switch (type)
		{
		case addOPreation:
			pIKOPeration = new AddOperation<T>();
			break;
		case subOPreation:
			pIKOPeration = new SubOperation<T>();
			break;
		default:
			break;
		}
		return pIKOPeration;
	}
};
#endif