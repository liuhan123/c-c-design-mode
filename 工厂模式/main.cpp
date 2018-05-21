#include <iostream>
#include "factory.h"
using namespace std;

int main()
{
	Factory<int>* pFactory = new Factory<int>();
	IKOPeration<int>* pIKOPeration = pFactory->getOPreation(addOPreation);
	pIKOPeration->setNumberA(20);
	pIKOPeration->setNumberB(30);
	int result = pIKOPeration->getResult();
	return 0;
}