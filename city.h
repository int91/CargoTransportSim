#pragma once
#include <iostream>
#include <vector>
#include "building.h"
#include "position.h"
class City
{
public:
	City();
	City(std::string Name, std::vector<Building> Buildings, Position pos); //Replace int with Building Class
	std::string GetName();
	void DrawBuildings();
	Position GetPos();
	//std::string GetState();
private:
	std::string _name;
	std::vector<Building> _buildings; //Replace int with Building Class
	Position _pos;
};