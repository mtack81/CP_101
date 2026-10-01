//Mike Tackett CP101 Fall Semester 2026
//for loops and setw

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float charge;
	
	cout << "Metered Parking Rates !" << endl;
	cout << fixed << setprecision(2);
	
	for (int hour = 1; hour <= 10; hour++)
	{
		charge = 2.00 + 1.75 * (hour - 1);
		cout << "Hour" << setw(5) << hour << "----$" << setw(6) << charge << endl;
	}
	
	return 0;
	
}
