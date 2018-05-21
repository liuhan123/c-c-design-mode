#ifndef _CITY_H
#define _CITY_H
#include <vector>
#include "place.h"
#include "visitor.h"

class City
{
public:
	City();
	~City();
	void attach(IKPlace* place);
	void detach();
	void accept(IKVisitor* pVistor);

private:
	vector<IKPlace*> m_vecPlace;
};
#endif
