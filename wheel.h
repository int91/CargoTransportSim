#pragma once
#include "vehicle_part.h"

class Wheel : public VehiclePart
{
public:
	Wheel();
	Wheel(std::string name, uint32_t val, double ps, uint8_t sze, double mxDurr);
	double GetPsi();
	double GetDurability();
	double GetWear();
	uint8_t GetSize();
private:
	double _wear;
	double _durability;
	double _maxDurability;
	double _psi;
	uint8_t _size;
};