#pragma once
#include "person.h"
#include "vehicle.h"
#include "contract.h"
#include "position.h"
#include "city.h"
#include <vector>
class Player : public Person
{
public:
	Player();
	Player(std::string nme, double mon);
	~Player();
	void StartContract(Contract* con);
	void CompleteContract();
	std::string GetBusinessName();
	Contract GetContract();
	Position* GetPos();
	void SetData(std::string nme, std::string bnme);
	Vehicle* GetCurVehicle();
private:
	uint32_t _exp;
	uint32_t _expTo;
	uint16_t _level;
	std::string _businessName;
	Position _pos;
	Vehicle _curVehicle;
	Contract _con;
	City _curLocation; //Change this to inherit from a location
};