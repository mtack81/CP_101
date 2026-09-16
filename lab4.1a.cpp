// Michael Tackett k0475835 fall semester 2026

#include <stdio.h>
#include <string>
#include <iostream>;
using namespace std;

int main()

{
      char town[64];
      float rainam;
      float rainpm;
            
      printf("Winter 26/27 Rain/Snow Gauge\n");
      printf("\n");
      printf("What is the name of the town? ");
      cin.getline(town,64);
      printf("How much rain in the am? ");
      scanf("%f", &rainam);
      printf("How much rain in the pm? ");
      scanf("%f", &rainpm);
      printf("\n");
      
      float totalrain = rainam + rainpm;
      float snowfall = totalrain * 11.75;
      
      printf("In %s today there was %.3f inches in the morning and\n%.3f inches in the afternoon/evening for a total of %.3f inches of rain.\nThis would be expected to accumulate to about %.3f inches of snowfall." , town, rainam, rainpm, totalrain, snowfall);
      
      return 0;
}
