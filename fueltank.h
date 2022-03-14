#include <iostream>
#include "vehicle_part.h"

#pragma once
class Fueltank : public VehiclePart
{
public:
	Fueltank();
	Fueltank(std::string name, double val, double maxFuel);
	void RefuelTank(double amount);
	void DrainTank(double amount);
	double GetFuel();
	double GetFuelLeft();
	double GetFuelPercent();
private:
	double _fuel;
	double _maxFuel;
};