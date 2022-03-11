#include <iostream>

#pragma once
#include "fueltank.h"
#include "wheel.h"
#include <vector>
class Vehicle
{
private:
public:
	Vehicle();
	Vehicle(Fueltank ft, std::string name, uint32_t val, int mxWheels, Wheel defWheel);
	Wheel* GetWheel(int index);
	std::vector<Wheel>* GetWheels();
	std::string GetName();
	Fueltank GetTank();
protected:
	std::vector<Wheel> _wheels;
	Fueltank _tank;
	std::string _name;
	uint32_t _value;
};

