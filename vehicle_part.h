#include <iostream>

#pragma once
class VehiclePart
{
public:
	VehiclePart();
	VehiclePart(std::string name, double val);
	double GetValue();
	std::string GetName();
private:
	std::string _name;
protected:
	double _value;
};