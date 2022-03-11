#include <iostream>
#include "vehicle.h"

void DrawWheels(Vehicle& ve)
{
    std::vector<Wheel>* a = ve.GetWheels();
    int page = 1;
    int max = 0;
    if ((page + 1) * 10 < a->size()) max = (page + 1) * 10;
    else max = a->size();
    for (int i = page * 10; i < max; i++)
    {
        std::cout << (i + 1) << ".) " << "Wheel Name: " << a->at(i).GetName() << "\n";
    }
}

int main()
{
    Vehicle v = Vehicle(Fueltank("Billy", 10, 20), "Truck", 10, 18, Wheel("BigWheel", 100, 20.1, 10, 100));;
    std::cout << "Vehicle Name: " << v.GetName() << "\nFuel Tank Name: " << v.GetTank().GetName() << "\nFuel: " << v.GetTank().GetFuel() << "\n";
    DrawWheels(v);
    std::cin.get();
}

