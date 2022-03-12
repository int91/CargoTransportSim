#pragma once
#include "person.h"
#include "vehicle.h"
#include "position.h"
#include <vector>
class Player : public Person
{
public:
	Player();
	Player(std::string nme, double mon, Vehicle* curVec);
	~Player();
	std::string GetBusinessName();
	Position GetPos();
	void SetData(std::string nme, std::string bnme);
private:
	std::string _businessName;
	Position _pos;
	Vehicle* _curVehicle;
};