// Michael Tackett k0475835 fall semester 2026
// Rain/snow gauge calc - iostream version of lab4.1a (same math, cin/cout only)
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()

{
      string town;
      float rainAM;
      float rainPM;
      
// getline(cin, town) - the string version (no size limit needed, unlike char arrays)
// vs cin.getline(town, 64) used in lab4.1a for a char array, which DOES need a size  
         
      cout<< "Winter 26/27 Rain/Snow Gauge"<< endl;
      cout<< endl;
      cout<< "What is the name of the town? ";
      getline( cin, town);
      cout<< "How much rain in the am? ";
      cin>> rainAM;
      cout<< "How much rain in the pm? ";
      cin>> rainPM;
      cout<< endl;
      
      float totalrain = rainAM + rainPM;
      float snowfall = totalrain * 11.75;
      
// fixed + setprecision(3) set once here, apply to ALL cout output after this line
// until changed - matches the %.3f used per-value in the printf version of lab4.1a 
     
      cout << fixed << setprecision(3);
      cout<< "In "<< town<< " today there was "<< rainAM<< " inches in the morning and "<< "\n"<< rainPM<< " inches in the afternoon/evening for a total of "<< totalrain
          << " inches of rain."<< "\n"<< "This would be expected to accumulate to about "<< snowfall<< " inches of snowfall.";
      
      return 0;
}

