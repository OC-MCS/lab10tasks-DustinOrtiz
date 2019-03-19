
#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
using namespace std;

int main()
{
	ProductionWorker worker("Dustin", 21, "3-19-19", 1, 21.21);

	cout << "Production Worker Name: " << worker.geteName() << endl;
	cout << "Production Worker Number: " << worker.geteNumber() << endl;
	cout << "Production Worker Hire Date: " << worker.gethireDate() << endl;
	cout << "Production Worker Shift: " << worker.getShift() << " (1 = Day | 2 = Night)" << endl;
	cout << "Production Worker Hourly Pay Rate: " << worker.gethourlyPayRate() << endl << endl;

	ShiftSupervisor supervisor("Dustin", 21, "3-19-19", 100000, 10000);

	cout << "Shift Supervisor Name: " << supervisor.geteName() << endl;
	cout << "Shift Supervisor Number: " << supervisor.geteNumber() << endl;
	cout << "Shift Supervisor Hire Date: " << supervisor.gethireDate() << endl;
	cout << "Shift Supervisor Annual Salary: " << supervisor.getannualSalary() << endl;
	cout << "Shift Supervisor Production Bonus: " << supervisor.getproductionBonus() << endl;

	return 0;
}