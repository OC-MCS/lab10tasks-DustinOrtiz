
#include "CargoShip.h"
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

CargoShip::CargoShip(string name, string yB, int capacity) : Ship (name, yB)
{
	setCargoShip(capacity);
}

void CargoShip::setCargoShip(int capacity)
{
	cargoCapacity = capacity;
}

int CargoShip::getcargoCapacity()
{
	return cargoCapacity;
}

void CargoShip::print()
{
	cout << "Ship Name: " << getshipName() << endl;
	cout << "Cargo Capacity: " << getcargoCapacity() << endl;
}