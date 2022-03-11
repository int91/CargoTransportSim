#include "utils.h"



uint32_t GetDistance(uint32_t stX, uint32_t stY, uint32_t enX, uint32_t enY)
{
    uint32_t dist = lround(sqrt(pow(enX - stX, 2) + pow(enY - stY, 2)));
    return dist;
}

int GetDistance(Position& a, Position& b)
{
    int dist = lround(sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2)));
    return dist;
}

int GetInput()
{
    int input;
    std::cin >> input;
    if (std::cin.good())
    {
        return input;
    }
    else
    {
        std::cin.clear();
        std::cin.ignore();
    }
    return NULL;
}

double GetLiters(double gallons) { return gallons * LITERS; }
double GetGallons(double liters) { return liters / LITERS; }
double GetKilometers(double miles) { return miles * KILOS; }
double GetMiles(double kilos) { return kilos / KILOS; }