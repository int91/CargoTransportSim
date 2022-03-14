#include "vehicle.h"

void DrawWheels(Vehicle ve) //This will go in whatever class I decide to put it in
{
	std::vector<Wheel> a = ve.GetWheels();
	size_t page = 1;
	size_t max = 0;
	if ((page + 1) * 10 < a.size()) max = (page + 1) * 10;
	else max = a.size();
	for (size_t i = page * 10; i < max; i++)
	{
		std::cout << (i + 1) << ".) " << "Wheel Name: " << a.at(i).GetName() << "\n";
		a.at(i).CalculateEfficiency();
	}
}

Vehicle::Vehicle()
{
	this->_tank = Fueltank();
	this->_name = "NO NAME SET";
	this->_value = 0;
	this->_wheels = std::vector<Wheel>();
	this->_miles = 0;
	this->_pos.x = 0;
	this->_pos.y = 0;
}

Vehicle::Vehicle(Fueltank ft, std::string name, double val, int mxWheels, Wheel defWheel)
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
	this->_pos.x = 0;
	this->_pos.y = 0;
}

void Vehicle::DrainFuel(double miles)
{
	const double fuelToDrain = miles * DRAINRATE;
	this->_tank.DrainTank(fuelToDrain);
}

void Vehicle::MoveTowards(Building loc, double miles)
{
	int m = (int)miles;
	int distX = loc.GetPos().x - this->_pos.x;
	int distY = loc.GetPos().y - this->_pos.y;
	//I have no clue what I'm doing here
	if (distX != 0)
	{
		if (m > distX)
		{
			m = distX;
		}
		//WTF
		if (distX > 0)
			this->_pos.x += m;
		else
			this->_pos.x -= m;
		
	}
	else if (distY != 0)
	{
		if (m > distY)
		{
			m = distY;
		}
		if (distY > 0)
			this->_pos.y += m;
		else
			this->_pos.y -= m;
	}
	this->DrainFuel(m);
}

std::string Vehicle::GetName()
{
	return this->_name;
}

Fueltank Vehicle::GetTank()
{
	return this->_tank;
}

Wheel Vehicle::GetWheel(int index)
{
	for (size_t i = 0; i < this->_wheels.size(); i++)
	{
		if (i == index) return this->_wheels[index];
	}
}

void Vehicle::SetPos(Position pos) { this->_pos = pos; }

Position Vehicle::GetPos() { return this->_pos; }

std::vector<Wheel> Vehicle::GetWheels() { return this->_wheels; }

double Vehicle::GetValue() { return this->_value; }