//Michael Tackett k0475835 Fall Semester 2026
//this program is to calculate the volume of box
#include <iostream>// forgot this line
#include <iomanip>//added to be able to use setprecision
using namespace std;

int main()

{
	//reworked this section due to variables not being declared and moved float formula for vol to after input
	//height width and length to be fractions
	
	float ht;
	float wd;
	float ln;
	
  
	cout << "Box Volume calculator" << endl; //added endl on here to make it go to the next line 
	cout << endl; //added space between title and questions for easier reading
	cout << "What is the height of the box? "; //moved question mark and added space to make for easier reading
	cin >> ht; //<< was used instead of >> for cin
	cout << "What is the width of the box? "; //moved question mark and added space to make for easier reading
	cin >> wd; //<< was used instead of >>
	cout << "What is the length of the box? "; //moved question mark and added space to make for easier reading and wrong > was used
	cin >> ln; //changed to ln which is the declared variable for length
	cout << endl; //changed this line because i think it was meant to be a blank line using the \n

	float vol = ht*wd*ln; //moved here due to needing the input from the cin
	
	cout << fixed << setprecision(3);// used to make sure the decimal goes out to 3
	cout << "The Volume of the box is " << vol; //removed a bunch of stuff used with stdio.h not iostream and then added the variable for output

	return 0;
}
