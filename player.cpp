#include "player.h"

Player::Player()
{
	this->_name = "NO NAME SET";
	this->_money = 0;
}

Player::Player(std::string nme, double mon) : Person(nme, mon)
{
	this->_name = nme;
	this->_money = mon;
	this->_pos.x = 0;
	this->_pos.y = 0;
}

void Player::SetData(std::string nme)
{
	this->_name = nme;
}

Position Player::GetPos() { return this->_pos; }