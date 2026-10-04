//Mike Tackett CP101 Fall Semester 2026
//do-while loops for input validation

#include <iostream>
using namespace std;

int main()
{
	int month;
	int day;
	int year;

	cout << "Magic Date Detector" << endl << endl;

	do
	{
		cout << "What is the month ? ";
		cin >> month;

		if (month <= 0 || month > 12)
		{
			cout << " Not a valid month please reenter!" << endl;
		}

	} while (month <= 0 || month > 12);

	do
	{
		cout << "What is the day ? ";
		cin >> day;

		if (day <= 0 || day > 31)
		{
			cout << " Not a valid day in any month please reenter!" << endl;
		}
		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		{
			cout << " Not a valid day in that month please reenter!" << endl;
		}
		else if (month == 2 && day > 29)
		{
			cout << "Not a valid day in February please re-enter!" << endl;
		}
		else if (month == 2 && day == 29)
		{
			cout << " Valid in Leap year only (Caution) no re-entry required." << endl;
		}

	} while (day <= 0 || day > 31 || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) || (month == 2 && day > 29));

	do
	{
		cout << "What is the two digit year ? ";
		cin >> year;

		if (year < 0 || year > 99)
		{
			cout << " Not a valid two digit year please reenter!" << endl;
		}

	} while (year < 0 || year > 99);

	cout << endl << "Valid Entry" << endl << endl;

	if (day + month == year || day * month == year)
	{
		cout << " Magic Date !!" << endl;
	}
	else
	{
		cout << "Just a boring day" << endl;
	}

	return 0;
}
