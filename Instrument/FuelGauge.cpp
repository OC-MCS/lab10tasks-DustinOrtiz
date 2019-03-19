
#include "FuelGauge.h"
#include "Odometer.h"
#include <iostream>
#include <string>
using namespace std;

FuelGauge::FuelGauge()
{
	fuel = 0;
}

int FuelGauge::currentAmount()
{
	int current;

	current = fuel;

	return current;
}

void FuelGauge::increment()
{
	for (int i = 0; i < 15; i++)
	{
		fuel++;
	}
}

void FuelGauge::decrement()
{
	fuel--;
}