
#include "ProductionWorker.h"
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

ProductionWorker::ProductionWorker(string name, int number, string date, int dN, double payRate) : Employee(name, number, date)
{
	setProductionWorker(dN, payRate);
}

void ProductionWorker::setProductionWorker(int dN, double payRate)
{
	shift = dN;
	hourlyPayRate = payRate;
}

int ProductionWorker::getShift()
{
	return shift;
}

double ProductionWorker::gethourlyPayRate()
{
	return hourlyPayRate;
}