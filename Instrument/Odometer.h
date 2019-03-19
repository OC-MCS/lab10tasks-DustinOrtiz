
#pragma once
#include <iostream>
#include "FuelGauge.h"
using namespace std;

class Odometer
{
private:
	int mileage;
public:
	Odometer();
	int currentMileage();
	void addmile(FuelGauge &);
	string toString();
};

ostream &operator<<(ostream &, Odometer &);