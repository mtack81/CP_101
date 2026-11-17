#include <iostream>

using namespace std;

int main()
{
	int bowlers[12];
	
	cout << "Bruin Bowling League Score Tracker 2026" << endl << endl;
	
	do
	{
		cout << "How many bowlers tonight (2-10)? ";
		cin >> bowlers;
	}
	while (bowlers < 2 || bowlers > 10);
	
	if (bowlers < 2 || bowlers > 10)
	{
		cout << "Must be between 2 and 10, try again";
	}
	
	cout << "Enter score for Bowler 1: ";
	cin >> bowler[0];
	cout << "Enter score for Bowler 2: ";
	cin >> bowler[1];
	cout << "Enter score for Bowler 3: ";
	cin >> bowler[2];
	
	cout << "Scores from lowest to highest: " << endl;
	cout << bowlers << desc << endl << endl;
	
	cout << "The high score is " << bowlers[0] << endl;
	cout << "The low score is " << bowlers[12] << endl;
	cout << "The average score is " << avg << bowlers << endl;
	
	return 0;
}
