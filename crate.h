#pragma once
#include "item.h"

class Crate
{
public:
	Crate(uint32_t ma, uint32_t a, Item i)
	{
		_item = i;
		_amount = a;
		_maxAmount = ma;
	};

	Item GetItem() { return _item; }

	inline uint32_t GetAmount() { return _amount; }
	uint32_t GetMaxAmount();

private:
	Item _item;
	uint32_t _amount;
	uint32_t _maxAmount;
};