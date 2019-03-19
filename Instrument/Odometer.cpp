
#include "Odometer.h" 
#include "FuelGauge.h"
#include <iostream>
#include <string>
using namespace std;

Odometer::Odometer()
{
	mileage = 0;
}

int Odometer::currentMileage()
{
	int mileages;

	mileages = mileage;

	return mileages;
}

void Odometer::addmile(FuelGauge &other)
{
	mileage++;

	if (mileage > 999999)
	{
		mileage = 0;
	}
	if (mileage % 24 == 0)
	{
		other.decrement();
	}
}

string Odometer::toString()
{
	string m;
	int miles = mileage;

	m = to_string(miles);

	return m;
}

ostream & operator<<(ostream &display, Odometer &other)
{
	display << other.toString();

	return display;
}