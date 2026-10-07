//Mike Tackett CP101 Fall Semester 2026
//nested loops

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int nsposts;
	int ewposts;
	char side;
	char answer;

	do
	{
		cout << "Bruin Agriculture Fence Builder 2026 variant" << endl << endl;

		do
		{
			cout << " What is the Number of North/South Fence posts? ";
			cin >> nsposts;

			if (nsposts < 2)
			{
				cout << "    Value must be at least 2 please try again" << endl;
			}

		} while (nsposts < 2);

		if (nsposts > 12)
		{
			nsposts = 12;
		}

		do
		{
			cout << " What is the Number of East/West Fence posts? ";
			cin >> ewposts;

			if (ewposts < 2)
			{
				cout << "    Value must be at least 2 please try again" << endl;
			}

		} while (ewposts < 2);

		if (ewposts > 12)
		{
			ewposts = 12;

		}
			cout << endl << endl;

		//top fence
		cout << "|";
		for (int post = 1; post < nsposts; post++)
		{
			cout << "==|";
		}
		cout << endl;

		//sides - odd rows are boards (:), even rows are posts (-)
		for (int row = 1; row <=2 * ewposts -3; row++)//int row =1; row <=2 * ewposts -3; row++)
		{
			if (row % 2 == 1)
			{
				side = ':';
			}
			else
			{
				side = '-';
			}

			cout << side << setw(3 * (nsposts - 1)) << side << endl;
		}

		//bottom fence
		cout << "|";
		for (int post = 1; post < nsposts; post++)
		{
			cout << "==|";
		}
		cout << endl;

		cout << endl << "Corral Built!!" << endl << endl;
		cout << "Would you like to build another (Y/N)? ";
		cin >> answer;
		} while (answer != 'N');

	return 0;
}
