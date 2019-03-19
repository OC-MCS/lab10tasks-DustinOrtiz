
#include "CruiseShip.h"
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

CruiseShip::CruiseShip(string name, string yB, int passengers) : Ship(name, yB)
{
	setCruiseShip(passengers);
}

void CruiseShip::setCruiseShip(int passengers)
{
	numberOfPassengers = passengers;
}

int CruiseShip::getnumberofPassengers()
{
	return numberOfPassengers;
}

void CruiseShip::print()
{
	cout << "Ship Name: " << getshipName() << endl;
	cout << "Number of Passengers: " << getnumberofPassengers() << endl;
}