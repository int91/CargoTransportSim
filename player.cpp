#include "player.h"

Player::Player()
{
	this->_name = "NO NAME SET";
	this->_money = 0;
}

Player::~Player()
{
	delete _curVehicle;
}

Player::Player(std::string nme, double mon, Vehicle* curVec) : Person(nme, mon)
{
	this->_name = nme;
	this->_money = mon;
	this->_pos.x = 0;
	this->_pos.y = 0;
	this->_curVehicle = curVec;
}

void Player::SetData(std::string nme, std::string bnme)
{
	this->_name = nme;
	this->_businessName = bnme;
}

std::string Player::GetBusinessName() { return this->_businessName; }

Position Player::GetPos() { return this->_pos; }