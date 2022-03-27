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

	std::string GetBusinessName();

	void StartContract(Contract* con);
	void CompleteContract();
	void SetData(std::string nme, std::string bnme);

	Contract GetContract();
	Position* GetPos();
	Vehicle* GetCurVehicle();
private:
	std::string _businessName;

	uint32_t _exp;
	uint32_t _expTo;
	uint16_t _level;
	
	Position _pos;
	Vehicle _curVehicle;
	Contract _con;
	City _curLocation; //Change this to inherit from a location
};