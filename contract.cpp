#include "contract.h"

Contract::Contract()
{
	_name = "NoName";
	_paymentPerM = 0;
	_payment = 0;
}

Contract::Contract(std::string nme, Building sL, Building eL, Vehicle veh, double ppm)
{
	_name = nme;
	_startLocation = sL;
	_endLocation = eL;
	_vehicle = veh;
	_paymentPerM = ppm;
	CalculatePayment();
}

Contract::~Contract()
{

}

void Contract::CalculatePayment()
{
	_payment = GetTotalDistance() * _paymentPerM;
	_expReward = (uint32_t)GetTotalDistance();
}

bool Contract::AtDestination(Position pos)
{
	if (pos.x == this->_endLocation.GetPos().x && pos.y == this->_endLocation.GetPos().y) \
		return true;
	else 
		return false;
}

uint32_t Contract::GetExpReward() { return _expReward; }

double Contract::GetPayment() { return _payment; }

int Contract::GetTotalDistance() { return (_endLocation.GetPos().x - _startLocation.GetPos().x) + (_endLocation.GetPos().y - _startLocation.GetPos().y); }

Building* Contract::GetStartLocation() { return &_startLocation; }

Building* Contract::GetEndLocation() { return &_endLocation; }

Vehicle Contract::GetVehicle() { return _vehicle; }