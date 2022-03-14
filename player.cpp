#include "player.h"

Player::Player()
{
	this->_name = "NO NAME SET";
	this->_money = 0;
	this->_pos.x = 0;
	this->_pos.y = 0;
}

Player::~Player()
{
	
}

Player::Player(std::string nme, double mon) : Person(nme, mon)
{
	this->_curLocation = City();
	this->_name = nme;
	this->_money = mon;
	this->_pos.x = 0;
	this->_pos.y = 0;
}

void Player::SetData(std::string nme, std::string bnme)
{
	this->_name = nme;
	this->_businessName = bnme;
}

void Player::StartContract(Contract* con)
{
	_con = *con;
	_curVehicle = con->GetVehicle();
	_pos = con->GetStartLocation()->GetPos();
	_curVehicle.SetPos(_pos);
}

void Player::CompleteContract()
{
	if (_con.GetName() != "NoName")
	{
		double p = _con.GetPayment();
		uint32_t e = _con.GetExpReward();
		_con = Contract();
		_money += p;
		_exp += e;
		std::cout << "Money Earned: $" << p << "\n";
		std::cout << "Exp Earned: " << e << "\n";
	}
}

Contract Player::GetContract() { return _con; }

std::string Player::GetBusinessName() { return this->_businessName; }

Position* Player::GetPos() { return &this->_pos; }

Vehicle* Player::GetCurVehicle() { return &this->_curVehicle; }