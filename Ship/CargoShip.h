
#pragma once
#include "Ship.h"
#include <string>
using namespace std;

class CargoShip : public Ship
{
private:
	int cargoCapacity;
public:
	CargoShip(string, string, int);
	void setCargoShip(int);
	int getcargoCapacity();
	void print();
};