#include "vehicle.h"

Vehicle::Vehicle()
{
	this->_tank = Fueltank();
	this->_name = "NO NAME SET";
	this->_value = 0;
	this->_wheels = std::vector<Wheel>();
	this->_miles = 0;
}

Vehicle::Vehicle(Fueltank ft, std::string name, uint32_t val, int mxWheels, Wheel defWheel)
{
	this->_wheels = std::vector<Wheel>();
	for (int i = 0; i < mxWheels; i++)
	{
		this->_wheels.push_back(defWheel);
	}
	this->_tank = ft;
	this->_name = name;
	this->_value = ft.GetValue() + val;
	this->_miles = 0;
}

void Vehicle::DrainFuel(double miles)
{
	const double fuelToDrain = miles * DRAINRATE;
	this->_tank.DrainTank(fuelToDrain);
}

std::string Vehicle::GetName()
{
	return this->_name;
}

Fueltank Vehicle::GetTank()
{
	return this->_tank;
}

Wheel* Vehicle::GetWheel(int index)
{
	for (size_t i = 0; i < this->_wheels.size(); i++)
	{
		if (i == index) return &this->_wheels[index];
	}
}

std::vector<Wheel>* Vehicle::GetWheels() { return &this->_wheels; }