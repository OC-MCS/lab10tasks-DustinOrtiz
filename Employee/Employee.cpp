
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

Employee::Employee(string name, int number, string date)
{
	setEmployee(name, number, date);
}

void Employee::setEmployee(string name, int number, string date)
{
	eName = name;
	eNumber = number;
	hireDate = date;
}

string Employee::geteName()
{
	return eName;
}

int Employee::geteNumber()
{
	return eNumber;
}

string Employee::gethireDate()
{
	return hireDate;
}