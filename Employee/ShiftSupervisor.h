
#pragma once
#include "Employee.h"
#include <string>
using namespace std;

class ShiftSupervisor : public Employee
{
private:
	double annualSalary;
	double productionBonus;
public:
	ShiftSupervisor(string, int, string, double, double);
	void setShiftSupervisor(double, double);
	double getannualSalary();
	double getproductionBonus();
};