//Mike Tackett CP101 Fall Semester 2026
//Uses nested conditionals

#include <iostream>
#include <iomanip>
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
	cout << fixed << setprecision(3);
	
	if (region == 'F' || region == 'f')
	{		
		cout << "Given the temperature is " << temp << " degrees and " << rain << " inches of precipitation today.\n";
		
		if (temp < 38 || rain > 0.475 )
		{	
			cout << "The Fairways on the Golf Course will NOT be watered." << endl;
		}
		else
		{
			cout << "The Fairways on the Golf Course will be watered." << endl;
		}
	}
	else if (region == 'R' || region == 'r')
	{	
		cout << "Given the temperature is " << temp << " degrees and " << rain << " inches of precipitation today.\n";
		
		if (temp < 38 || rain > 0.135 )
		{
			cout << "The Rough on the Golf Course will NOT be watered." << endl;
		}
		else
		{
			cout << "The Rough on the Golf Course will be watered." << endl;
		}
	}
	else if (region == 'G' || region == 'g')
	 {  
	 	cout << "Given the temperature is " << temp << " degrees and " << rain << " inches of precipitation today.\n";
		
		if (temp < 38 || rain > 0.775)
		{
			cout << "The Greens on the Golf Course will NOT be watered." << endl;
		}
		else 
		{
			cout << "The Greens on the Golf Course will be watered." << endl;
		}
		
	}
	else
	{
		cout << "An INVALID Region of the Golf Course was selected." << endl;
	}

	return 0;
}

