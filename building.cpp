#include "building.h"

Building::Building()
{
	this->_name = "NO BUILDING NAME SET";
	this->_pos.x = 0;
	this->_pos.y = 0;
}

Building::Building(std::string nme, int x, int y)
{
	this->_name = nme;
	this->_pos.x = x;
	this->_pos.y = y;
}

std::string Building::GetName() { return this->_name; }

Position Building::GetPos() { return this->_pos; }