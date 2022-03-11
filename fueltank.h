#include <iostream>
#include "vehicle_part.h"

#pragma once
class Fueltank : public VehiclePart
{
public:
	Fueltank();
	Fueltank(std::string name, uint32_t val, double maxFuel);
	void RefuelTank(double amount);
	void DrainTank(double amount);
	double GetFuel();
	double GetFuelLeft();
private:
	double fuel;
	double maxFuel;
};