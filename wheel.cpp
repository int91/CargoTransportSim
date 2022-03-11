#include "wheel.h"

Wheel::Wheel()
{
	this->_maxDurability = 0;
	this->_durability = 0;
	this->_size = 0;
	this->_wear = 0;
	this->_value = 0;
	this->_psi = 0;
}

Wheel::Wheel(std::string name, uint32_t val, double ps, uint8_t sze, double mxDur) : VehiclePart(name, val)
{
	this->_psi = ps;
	this->_size = sze;
	this->_wear = 0;
	this->_maxDurability = mxDur;
	this->_durability = mxDur;
}

double Wheel::GetPsi() { return this->_psi; }
double Wheel::GetDurability() { return this->_durability; }
double Wheel::GetWear() { return this->_wear; }
uint8_t Wheel::GetSize() { return this->_size; }