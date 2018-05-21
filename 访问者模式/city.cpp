#include "city.h"
#include "place.h"

#include <iostream>
using namespace std;
City::City()
{

}

City::~City()
{

}

void City::attach(IKPlace* place)
{
	m_vecPlace.push_back(place);
}


void City::detach()
{

}

void City::accept(IKVisitor* pVistor)
{
	for (auto iter = m_vecPlace.begin(); iter != m_vecPlace.end(); iter++)
	{
		(*iter)->accept(pVistor);
	}
}

int main()
{
	IKPlace *pBellTower = new BellTower();
	IKPlace* pTerracottaWarriors = new TerracottaWarriors();

	City* pCity = new City();
	pCity->attach(pBellTower);
	pCity->attach(pTerracottaWarriors);

	IKVisitor* pTourist = new Tourist();
	IKVisitor* pCleaner = new Cleaner();
	pCity->accept(pTourist);
	pCity->accept(pCleaner);

	return 0;
}