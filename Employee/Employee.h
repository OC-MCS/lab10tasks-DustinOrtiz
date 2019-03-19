
#pragma once
#include <string>
using namespace std;

class Employee
{
private:
	string eName;
	int eNumber;
	string hireDate;
public:
	Employee(string, int, string);
	void setEmployee(string, int, string);
	string geteName();
	int geteNumber();
	string gethireDate();
};