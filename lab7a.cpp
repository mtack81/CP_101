//Mike Tackett CP101 Fall Semester 2026
//Writting to a file

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{

float num;

ofstream savefile;
savefile.open("MJT1.dat");
savefile << fixed << setprecision(3);

cout << "Writing data to MJT1.dat file: " << endl;

for (int count = 1; count <= 5;  count++)
{
	cout << "Enter Number " << count << ": ";
	cin >> num;
	savefile << num << endl;
}

savefile << "Mike Tackett" << endl;
savefile << "Lab #101-7.1-I" << endl;
savefile << "CP 101-1230 Fall 2026" << endl;

savefile.close();

cout << "The data above is now in the file MJT1.dat" << endl;


return 0;
}
