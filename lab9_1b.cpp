//Michael Tackett CP 101 Fall Semester 2026

#include <iostream>
using namespace std;

double volumecalc(double width = 6.5, double height = 9.1, double length = 3.5);

int main()
{
	double volume = volumecalc();
	cout << "Volume using defaults: " << volume << endl;
	
	volume = volumecalc(4.0);
	cout << "Volume with custom width: " << volume << endl;
	
	volume = volumecalc(4.0, 5.0);
	cout << "Volume with custom width and height: " << volume << endl;

	volume = volumecalc(4.0, 5.0, 6.0);
	cout << "Volume with all custom measurements: " << volume << endl;
	
	return 0;
}

double volumecalc(double width, double height, double length)
{
    return width * height * length;
}
