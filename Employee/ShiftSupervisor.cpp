
#include "ShiftSupervisor.h"
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

ShiftSupervisor::ShiftSupervisor(string name, int number, string date, double aS, double pB) : Employee(name, number, date)
{
	setShiftSupervisor(aS, pB);
}

void ShiftSupervisor::setShiftSupervisor(double aS, double pB)
{
	annualSalary = aS;
	productionBonus = pB;
}

double ShiftSupervisor::getannualSalary()
{
	return annualSalary;
}

double ShiftSupervisor::getproductionBonus()
{
	return productionBonus;;
}