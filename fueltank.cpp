#include "fueltank.h"

Fueltank::Fueltank()
{
	this->_fuel = 0;
	this->_maxFuel = 0;
}

Fueltank::Fueltank(std::string name, double val, double mxFuel) : VehiclePart(name, val)
{
	this->_fuel = mxFuel;
	this->_maxFuel = mxFuel;
	this->_value = val;
}

void Fueltank::DrainTank(double amount)
{
	if (this->_fuel - amount < 0) this->_fuel -= 0; 
	else this->_fuel -= amount;
}

double Fueltank::GetFuel()
{
	return this->_fuel;
}

double Fueltank::GetFuelLeft()
{
	return this->_maxFuel - _fuel;
}

void Fueltank::RefuelTank(double amount)
{
	if (this->_fuel + amount > this->_maxFuel) this->_fuel = this->_maxFuel;
	else this->_fuel += amount;
}

double Fueltank::GetFuelPercent() { return std::ceil((this->_fuel / this->_maxFuel) * 100.0); }