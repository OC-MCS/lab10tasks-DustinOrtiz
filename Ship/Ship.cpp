
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

Ship::Ship(string name, string yB)
{
	setShip(name, yB);
}

void Ship::setShip(string name, string yB)
{
	shipName = name;
	yearBuilt = yB;
}

string Ship::getshipName()
{
	return shipName;
}

string Ship::getyearBuilt()
{
	return yearBuilt;
}

void Ship::print()
{
	cout << "Ship Name: " << getshipName() << endl;
	cout << "Year Built: " << getyearBuilt() << endl;
}