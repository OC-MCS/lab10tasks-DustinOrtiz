
#include <iostream>
#include "FuelGauge.h"
#include "Odometer.h"
using namespace std;

int main()
{
	FuelGauge fuel;
	Odometer mileage;
	int count = 1;

	fuel.increment();

	while (fuel.currentAmount() > 0)
	{
		mileage.addmile(fuel);
		cout << "Mileage " << count << ": " << mileage << endl;

		if (mileage.currentMileage() % 24 == 0)
		{
			count++;
		}
	}

	return 0;
}