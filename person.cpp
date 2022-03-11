#include "person.h"

Person::Person()
{
	this->_name = "PERSON NAME NOT SET";
	this->_money = 0;
}

Person::Person(std::string nme, double mon)
{
	this->_name = nme;
	this->_money = mon;
}

std::string Person::GetName() { return this->_name; }
double Person::GetMoney() { return this->_money; }
void Person::RecievePaycheck(double income) { this->_money += std::ceil(income * 100.0) / 100.0; }
void Person::Pay(double amount) { this->_money -= std::ceil(amount * 100.0) / 100.0; }