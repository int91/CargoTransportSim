#include "vehicle_part.h"

VehiclePart::VehiclePart()
{
	this->_name = "NO NAME SET";
}

VehiclePart::VehiclePart(std::string name, double val)
{
	this->_name = name;
	this->_value = val;
}

std::string VehiclePart::GetName() { return this->_name; }

double VehiclePart::GetValue() { return this->_value; }