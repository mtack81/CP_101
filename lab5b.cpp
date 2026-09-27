//Mike Tackett CP101 Fall Semester 2026
//Uses nested conditionals

#include <iostream>
using namespace std;

int main()
{
	int temp;
	float rain;
	char region;
	
	cout << "Fall 2026 Automated \"Bruin\" Golf Course Sprinkler System" << endl;
	cout << endl;
	cout << "What is the temperature in degrees (F)? ";
	cin >> temp;
	cout << "How much precipitation today (in inches)? ";
	cin >> rain;
	cout <<  "The Golf course grass divisions are F-Fairways R-Rough G-Greens";
	cout << "Which do you cheese (FRG)? ";
	cin >> region;
	cout << endl;
	cout << endl;
	
	
	if (temp < 38)
	{
		if (region == 'F')
		{
			cout <<"The Fairways on the Golf Course will NOT be watered." << endl;
		}
	}
	return 0;
}

