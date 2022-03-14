#include "city.h"

City::City()
{
	this->_name = "NoName";
}

City::City(std::string Name, std::vector<Building> Buildings, Position pos)
{
	this->_name = Name;
	this->_buildings = Buildings;
	this->_pos = pos;
}

void City::DrawBuildings()
{
	for (size_t i = 0; i < this->_buildings.size(); i++)
	{
		std::cout << i+1 << ".) " << this->_buildings[i].GetName();
	}
}

std::string City::GetName() { return this->_name; }
Position City::GetPos() { return this->_pos; }