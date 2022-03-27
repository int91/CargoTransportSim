#pragma once
#include <iostream>
#include <vector>
#include "contract.h"

class JobMarket
{
public:
	JobMarket();
	std::vector<Contract>* GetContracts();
	Contract* GetContractAt(size_t index);
	size_t GetPage();
	void PageUp();
	void PageDown();
private:
	std::vector<Contract> _contracts;
	size_t _page;
};