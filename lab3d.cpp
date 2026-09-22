// Celsius to Fahrenheit and Kelvin converter
// Mike Tackett K0475835 Fall Semester

#include <iostream>
using namespace std;

int main()
{
	int Celsius;
	float Fahrenheit;
	float Kelvin;
	
	cout<< "What is the temperature in Celsius? ";
	cin>> Celsius;
	
// (9.0/5) uses a decimal instead of (9/5) to force floating-point division
// (9/5) with two ints would truncate to 1, giving a wrong Fahrenheit result	

	Fahrenheit = (9.0/5)*Celsius + 32;
	Kelvin = Celsius + 273;
	
	cout<< "The temperature in Fahrenheit is: "<< Fahrenheit<< endl;
	cout<< "The temperature in Kelvin is: "<< Kelvin<< endl;
	
    return 0;
}

