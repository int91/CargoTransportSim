#pragma once
#include <iostream>
#include "position.h"

const double KILOS = 1.609344;
const double LITERS = 3.78541178;

const bool DEBUGMODE = false;

uint32_t GetDistance(uint32_t stX, uint32_t stY, uint32_t enX, uint32_t enY);
int GetDistance(Position a, Position b);
int GetInput();
void ClearScr();

double GetLiters(double gallons);
double GetGallons(double liters);
double GetKilometers(double miles);
double GetMiles(double kilos);