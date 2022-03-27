#pragma once
#include <iostream>

class Item
{
public:
	Item() 
	{
		_name = "NoName";
		_value = 0;
	};
	Item(std::string nme, double val)
	{
		_name = nme;
		_value = val;
	};

	inline std::string GetName() { return _name; }
	inline double GetValue() { return _value; }
private:
	std::string _name;
	double _value;
};