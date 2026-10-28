//Michael Tackett CP 101 Fall Semester 2026

#include <iostream>
using namespace std;

int cubeit(bool value);
float cubeit(float value);
float cubeit(int value);

int main()
{
	cout << "Boolean true: " << cubeit(true) << endl;
	cout << "Cube of 2.5: " << cubeit(2.5) << endl;
	cout << "Cube of integer 3: " << cubeit(3) << endl;
	
	return 0;
}

int cubeit(bool value)
{
    if (value == true)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

float cubeit(float value)
{
    return value * value * value;
}

float cubeit(int value)
{
    return value * value * value;
}
