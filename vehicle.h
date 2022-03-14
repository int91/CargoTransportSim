#include <iostream>

#pragma once
#include "fueltank.h"
#include "wheel.h"
#include "city.h"
#include <vector>

const double DRAINRATE = 0.138;

class Vehicle
{
private:
public:
	Vehicle();
	Vehicle(Fueltank ft, std::string name, double val, int mxWheels, Wheel defWheel);
	Wheel GetWheel(int index);
	void DrainFuel(double miles);
	void MoveTowards(Building loc, double miles);
	void SetPos(Position pos);
	std::vector<Wheel> GetWheels();
	std::string GetName();
	Fueltank GetTank();
	Position GetPos();
	double GetValue();
protected:
	double _miles;
	std::vector<Wheel> _wheels;
	Fueltank _tank;
	std::string _name;
	double _value;
	Position _pos;
};

