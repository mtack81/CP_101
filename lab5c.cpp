//Mike Tackett CP101 Fall Semester 2026
//Compound conditions and ranges

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float miles;
	float galused;
	float price;
	float mpg;
	float cpm;
	float trip;
	
	cout << "Fall Color Pure Michigan 2026 Tour Fuel Calculation" << endl;
	cout << endl;
	cout << "How many miles did you travel? ";
	cin >> miles;
	cout << "How many Gallons of Gas did you use? ";
	cin >> galused;
	cout << "What was the price per Gallon of Gas? ";
	cin >> price;
	cout << endl;
	cout << endl;
	
	if (price <= 0.0)
	{
		cout << "GAS Price is INVALID";
	}
	else
	{
		mpg = miles / galused;
		trip = galused * price;
		cpm = trip / miles;
	
		cout << fixed << setprecision(3);
		cout << "You got " << mpg << " miles per gallon" << endl;
		cout << fixed << setprecision(2);
		cout << "This trip cost $" << trip << " at a cost per mile of $";
		cout << setprecision(6);
		cout << cpm << endl;
		if (mpg >34.75)
		{
			cout << "This is a GREEN MACHINE automobile in fuel economy." << endl;
		}
		else if (mpg <= 34.75 && mpg >= 16.25)
		{
			cout << "This is an AVERAGE automobile in fuel economy." << endl;
		}
		else if(mpg < 16.25)
		{
			cout << "This is a GAS GUZZLER automobile in fuel economy, " << endl;
		}
		if (cpm >= 0.075)
		{
			cout << "and this was a PRICEY trip.";
		}
		else 
		{
			cout << "and this was a REASONABLE trip.";
		}
	}
	
	
	
	
	return 0;
}
