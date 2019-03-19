
#include <iostream>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"
using namespace std;

int main()
{
	const int SHIPS = 3;
	Ship *ships[SHIPS] = { new Ship("Queen Marry", "September 26, 1934"), new CruiseShip("Titanic", "May 31, 1911", 0), new CargoShip("Panamax", "June 26, 2016", 100000) };

	for (auto shipTypes : ships)
	{
		shipTypes->print();
		cout << endl;
	}

	return 0;
}