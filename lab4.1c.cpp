// Michael Tackett k0475835 fall semester 2026
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
float loan;
float interest;
int years;
cout << "Monthly vs Bi-Monthly Payment Calculation" << endl;
cout << endl;
cout << "What is the loan amount? ";
cin >> loan;
cout << "What is the annual interest rate (enter 1% as 1) ? ";
cin >> interest;
cout << "What is the number of years for the loan? ";
cin >> years;
cout << endl;
float monthrate = (interest/100)/12;
int numpay = years * 12;
float growthfactor = pow(1+monthrate, numpay);
float emi = loan * (monthrategrowthfactor)/(growthfactor -1);
float birate = monthrate/2;
int binumpay = years24;
float bigrowthfactor = pow(1 + birate, binumpay);
float biemi = loan * (biratebigrowthfactor)/(bigrowthfactor - 1);
float totalbi = biemi2;
float savings = (eminumpay)-(biemibinumpay);
cout << fixed << setprecision(2); //if you want to tuen this off you use cout.unsetf(ios::fixed)
cout << setw(30) << left << "Loan Amount" << ": $" << setw(10) << right << loan << endl;
cout << setw(30) << left << "Annual Interest Rate" << ": " << setw(11) << right << interest << "%"<< endl;
cout << endl;
cout << setw(30) << left << "Monthly Payment" << ": $" << setw(10) << right << emi << endl;
cout << setw(30) << left << "Total Paid using Monthly" << ": $" << setw(10) << right << eminumpay << endl;
cout << setw(30) << left << "Interest Paid using Monthly" << ": $" << setw(10) << right << (eminumpay)-loan << endl;
cout << endl;
cout << setw(30) << left << "BiMonthly Payment" << ": $" << setw(10) << right << biemi << endl;
cout << setw(30) << left << "Total BiMonthly/Monthly Cost" << ": $" << setw(10) << right << totalbi << endl;
cout << setw(30) << left << "Total Paid using BiMonthly" << ": $" << setw(10) << right << biemibinumpay << endl;
cout << setw(30) << left << "Interest Paid using BiMonthly" << ": $" << setw(10) << right << (biemibinumpay)-loan << endl;
cout << endl;
cout << setw(30) << left << "Savings when using BiMonthly" << ": $" << setw(10) << right << savings << endl;
return 0;
}
