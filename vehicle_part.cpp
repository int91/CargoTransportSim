#include "vehicle_part.h"

VehiclePart::VehiclePart()
{
	this->_name = "NO NAME SET";
}

VehiclePart::VehiclePart(std::string name, uint32_t val)
{
	this->_name = name;
	this->_value = val;
}

std::string VehiclePart::GetName() { return this->_name; }

uint32_t VehiclePart::GetValue() { return this->_value; }