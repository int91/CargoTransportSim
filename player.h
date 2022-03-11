#pragma once
#include "person.h"
#include "position.h"
#include <vector>
class Player : public Person
{
public:
	Player();
	Player(std::string nme, double mon);
	Position GetPos();
	void SetData(std::string nme);
private:
	Position _pos;
};