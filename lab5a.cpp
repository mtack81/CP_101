//Mike Tackett CP101 Fall Semester 2026

#include <iostream>
using namespace std;

int main()
{
	int month;
	int day;
	int year;
	
	cout << "What is the day? ";
	cin >> day;
	cout << "what is the month? ";
	cin >> month;
	cout << "what is the year? ";
	cin >> year;
	
	if ( day+month==year || day*month==year )
	{
		cout << "Magic Date!" << endl;
	}
	else cout << "Just a boring day";
	
	return 0;
}
