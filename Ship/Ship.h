
#pragma once
#include <string>
using namespace std;

class Ship
{
private:
	string shipName;
	string yearBuilt;
public:
	Ship(string, string);
	void setShip(string, string);
	string getshipName();
	string getyearBuilt();
	virtual void print();
};