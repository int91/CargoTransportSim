#pragma once
#include <iostream>
#include "position.h"
class Building
{
public:
	Building();
	Building(std::string nme, int x, int y);
	Position GetPos();
	std::string GetName();
protected:
	std::string _name;
	Position _pos;
};