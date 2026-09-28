//Mike Tackett CP101 Fall Semester 2026
//Uses nested conditionals
//at the bottom there are if statements and they are kinda duplicated and should do checks for all of it to make it more simple
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
	cout <<  "The Golf course grass divisions are F-Fairways R-Rough G-Greens" << endl;
	cout << "Which do you choose (FRG)? ";
	cin >> region;
	cout << endl;
	cout << endl;
	
	
	if (region == 'F' || region == 'f')
{
		if (temp < 38)
		{
			cout << "The Fairways on the Golf Course will NOT be watered." << endl;
		}
		else if (rain < 0.475)
		{
			cout << "The Fairways on the Golf Course will be watered." << endl;
		}
		else
		{
			cout << "The Fairways on the Golf Course will NOT be watered." << endl;
		}
	}
	else if (region == 'R' || region == 'r')
	{
		if (temp < 38)
		{
			cout << "The Rough on the Golf Course will NOT be watered." << endl;
		}
		else if (rain < 0.135)
		{
			cout << "The Rough on the Golf Course will be watered." << endl;
		}
		else
		{
			cout << "The Rough on the Golf Course will NOT be watered." << endl;
		}
	}
	else if (region == 'G' || region == 'g')
	{
		if (temp < 38)
		{
			cout << "The Greens on the Golf Course will NOT be watered." << endl;
		}
		else if (rain < 0.775)
		{
			cout << "The Greens on the Golf Course will be watered." << endl;
		}
		else
		{
			cout << "The Greens on the Golf Course will NOT be watered." << endl;
		}
	}
	else
	{
		cout << "An INVALID Region of the Golf Course was selected." << endl;
	}

	return 0;
}

