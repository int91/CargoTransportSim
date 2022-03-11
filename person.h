#pragma once
#include <iostream>
#include <math.h>
#include "position.h"
class Person
{
public:
	Person();
	Person(std::string nme, double mon);
	std::string GetName();
	double GetMoney();
	void RecievePaycheck(double income);
	void Pay(double amount);
private:
	
protected:
	std::string _name;
	double _money;
};