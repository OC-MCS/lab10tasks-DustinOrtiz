
#pragma once
#include <iostream>
using namespace std;

class FuelGauge
{
private:
	int fuel;
public:
	FuelGauge();
	int currentAmount();
	void increment();
	void decrement();
};