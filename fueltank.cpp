#include "fueltank.h"

Fueltank::Fueltank()
{
	this->fuel = 0;
	this->maxFuel = 0;
}

Fueltank::Fueltank(std::string name, uint32_t val, double maxFuel) : VehiclePart(name, val)
{
	this->fuel = maxFuel;
	this->maxFuel = maxFuel;
}

void Fueltank::DrainTank(double amount)
{
	if (this->fuel - amount < 0) this->fuel -= 0; 
	else this->fuel -= amount;
}

double Fueltank::GetFuel()
{
	return this->fuel;
}

double Fueltank::GetFuelLeft()
{
	return this->maxFuel - fuel;
}

void Fueltank::RefuelTank(double amount)
{
	if (this->fuel + amount > this->maxFuel) this->fuel = this->maxFuel;
	else this->fuel += amount;
}