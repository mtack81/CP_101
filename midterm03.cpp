//Michael Tackett CP101 Fall Sesmester 11/18/26 14:30
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
      float power;
      float usage;
      float cost;
      
cout << "!!! Michael Tackett  CP101 Midterm Prog Exam 03 !!!" << endl << endl;
cout << "Energy Device Cost Calculator" << endl << endl;
      
do
{
	cout << "What is the device Power Rating in Watts? ";
    cin >> power;
                
    if (power <= 0)
    {
        cout << "      Not a valid amount of power requirement" << endl;
    }
}
    
while (power <= 0);
      
    do
    {
        cout << "How long in hours is the device being used? ";
        cin >> usage;
                
        if (usage <= 0)
        {
            cout << "      Not a valid amount of time for usage" << endl;
        }
    }
    
    while (usage <= 0);
      
      do
    {
        cout << "What is the cost in Kwh? $ ";
        cin >> cost;
                
        if (cost <= 0)
        {
            cout << "      The Utility company does not generate free energy" << endl;
        }
    }
    
    while (cost <= 0);
    
    float totalcost = (power * usage)/1000;
      float consume = totalcost * usage;
      
    cout << fixed << setprecision(2) << endl << endl;
    cout << "It will cost $" << totalcost << " to run the device for " << usage << " hrs" << endl;
    cout << "Energy Consumption " << consume << " Kwh at a price of $" << fixed << setprecision(4) << cost << "/Kwh" << endl;
    
      return 0;
}
