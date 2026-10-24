//Michael Tackett CP 101 Fall Semester 2026

#include <iostream>
using namespace std;

int cubeit(bool value);
double cubeit(double value);
double cubeit(int value);

int main()
{
	cout << "Boolean true: " << cubeit(true) << endl;
	cout << "Cube of 2.5: " << cubeit(2.5) << endl;
	cout << "Cube of integer 3: " << cubeit(3) << endl;
	
	return 0;
}

int cubeit(bool value)
{
    return value;
}

double cubeit(double value)
{
    return value * value * value;
}

double cubeit(int value)
{
    return value * value * value;
}
