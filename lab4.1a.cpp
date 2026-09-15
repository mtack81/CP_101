// Michael Tackett k0475835 fall semester 2026

#include <stdio.h>
#include <string>
using namespace std;

int main()

{
	char town[64];
	float rainAM;
	float rainPM;
		
	printf("Winter 26/27 Rain/Snow Gauge\n");
	printf("\n");
	printf("What is the name of the town? ");
	scanf(" %[^\n]", town);
	printf("How much rain in the AM? ");
	scanf("%f", &rainAM);
	printf("How much rain in the PM? ");
	scanf("%f", &rainPM);
	printf("\n");
	
	float totalrain = rainAM + rainPM;
	float snowfall = totalrain * 11.75;
	
	printf("In %s today there was %.3f inches in the morning and\n%.3f inches in the afternoon/evening for a total of %.3f inches of rain.\nThis would be expected to accumulate to about %.3f inches of snowfall." , town, rainAM, rainPM, totalrain, snowfall);
	
	return 0;
}

