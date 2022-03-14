#pragma once
#include <iostream>
#include "building.h"
#include "vehicle.h"
#include "utils.h"

class Contract
{
public:
	Contract();
	Contract(std::string nme, Building sL, Building eL, Vehicle veh, double ppm); //Add amount of cargo crates (Type eg. Big Crate up to 1000 apples per, Item eg. Apples)
	~Contract();

	inline std::string GetName() { return _name; };
	void CalculatePayment();
	int GetTotalDistance();
	bool AtDestination(Position pos);

	double GetPayment();
	uint32_t GetExpReward();
	Vehicle GetVehicle();
	Building* GetStartLocation();
	Building* GetEndLocation();
private:
	//Add a business class that will represent the "Employer" for this Contract
	std::string _name;
	double _paymentPerM;
	double _payment;

	uint32_t _expReward;

	Building _startLocation;
	Building _endLocation;
	Vehicle _vehicle;
};