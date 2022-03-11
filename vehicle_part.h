#include <iostream>

#pragma once
class VehiclePart
{
public:
	VehiclePart();
	VehiclePart(std::string name, uint32_t val);
	uint32_t GetValue();
	std::string GetName();
private:
	std::string _name;
protected:
	uint32_t _value;
};