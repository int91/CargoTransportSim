#include "city.h"

void City::DrawBuildings()
{
	for (size_t i = 0; i < this->_buildings.size(); i++)
	{
		//std::cout << i << ".) " << this->_buildings[i].GetName();
	}
}

Position City::GetPos() { return this->_pos; }