#pragma once
#include <iostream>
#include <vector>
#include "building.h"
#include "position.h"
class City
{
public:
	City(std::string Name, std::vector<Building> Buildings); //Replace int with Building Class
	std::string GetName();
	void DrawBuildings();
	Position GetPos();
	//std::string GetState();
private:
	std::vector<Building> _buildings; //Replace int with Building Class
	Position _pos;
};