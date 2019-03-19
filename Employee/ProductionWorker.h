
#pragma once
#include "Employee.h"
#include <string>
using namespace std;

class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyPayRate;
public:
	ProductionWorker(string, int, string, int, double);
	void setProductionWorker(int, double);
	int getShift();
	double gethourlyPayRate();
};