
#pragma once
#include "Ship.h"
#include <string>
using namespace std;

class CruiseShip : public Ship
{
private:
	int numberOfPassengers;
public:
	CruiseShip(string, string, int);
	void setCruiseShip(int);
	int getnumberofPassengers();
	void print();
};