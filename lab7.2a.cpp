//Mike Tackett CP101 Fall Semester 2026
//Reading from a file

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{

float num;
float sum = 0;

ifstream readfile;
readfile.open("MJT1.dat");
cout << fixed << setprecision(3);

cout << "Reading data from the MJT1.dat file: " << endl << endl;

for (int count = 1; count <= 5;  count++)
{
	readfile >> num;
	cout << "Number " << count << " is " << num << endl;
	sum = sum + num;
}


readfile.close();

cout <<endl;
cout << "The sum of the 5 numbers is " << sum << endl;
cout << "The Average of these 5 numbers is " << sum / 5 << endl;

return 0;
}
