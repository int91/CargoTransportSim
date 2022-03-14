#include "jobmarket.h"

JobMarket::JobMarket()
{
	_page = 0;
	_contracts.push_back(Contract("ML to MT", Building("Marqueese Logistics", 10, 10), Building("Maroose Trucking", 50, 90), Vehicle(Fueltank("FairRunner 20 Liter", 10, 190), "Truck", 10, 18, Wheel("10X FairRunner", 100, 20.1, 10, 100)), 7.5));
}

size_t JobMarket::GetPage() { return _page; }
std::vector<Contract>* JobMarket::GetContracts() { return &_contracts; }
Contract* JobMarket::GetContractAt(size_t index) { return &_contracts[index]; }