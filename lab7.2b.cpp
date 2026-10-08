//Mike Tackett CP101 Fall Semester 2026
//Reading from a file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

string line;

ifstream readfile;
readfile.open("file.txt");

while (getline(readfile, line))
{
	cout << line << endl;
}


readfile.close();

return 0;
}
