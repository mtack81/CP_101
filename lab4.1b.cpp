// Michael Tackett k0475835 fall semester 2026

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()

{
	string town;
	float rainAM;
	float rainPM;
		
	cout<< "Winter 26/27 Rain/Snow Gauge"<< endl;
	cout<< endl;
	cout<< "What is the name of the town? ";
	getline( cin, town);
	cout<< "How much rain in the AM? ";
	cin>> rainAM;
	cout<< "How much rain in the PM? ";
	cin>> rainPM;
	cout<< endl;
	
	float totalrain = rainAM + rainPM;
	float snowfall = totalrain * 11.75;
	
	cout << fixed << setprecision(3);
	cout<< "In "<< town<< " today there was "<< rainAM<< " inches in the morning and "<< "\n"<< rainPM<< " inches in the afternoon/evening for a total of "<< totalrain<< " inches of rain."<< "\n"<< "This would be expected to accumulate to about "<< snowfall<< " inches of snowfall.";
	
	return 0;
}

