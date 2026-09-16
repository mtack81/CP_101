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
	
	cout << "What is the loan amount? ";
	cin >> loan;
	cout << "What is the annual interest rate (enter 1% as 1) ? ";
	cin >> interest;
	cout << "What is the number of years for the loan? ";
	cin >> years;
	
	float monthrate = (interest/100)/12;
	int numpay = years * 12;
	float growthfactor = pow(1+monthrate, numpay);
	float emi = loan * (monthrate*growthfactor)/(growthfactor -1);
	float birate = monthrate/2;
	int binumpay = years*24;
	float bigrowthfactor = pow(1 + birate, binumpay);
	float biemi = loan * (birate*bigrowthfactor)/(bigrowthfactor - 1);
	float totalbi = biemi*2;
		
	cout << fixed << setprecision(2);
	
	cout << setw(20) << left << "Loan Amount" << ": $" << setw(10) << right << loan << endl;
	cout << setw(20) << left << "Annual Interest Rate" << ": " << setw(11) << right << interest << "%"<< endl;
	cout << setw(20) << left << "Monthly Payment" << ": $" << setw(10) << right << emi << endl;
	cout << setw(20) << left << "Total Paid using Monthly" << ": $" << setw(10) << right << emi*numpay << endl;
	cout << setw(20) << left << "Interest Paid using Monthly" << ": $" << setw(10) << right << (emi*numpay)-loan << endl;
	cout << setw(20) << left << "BiMonthly Payment" << ": $" << setw(10) << right << biemi << endl;
	cout << setw(20) << left << "Total BiMonthly/Monthly Cost" << ": $" << setw(10) << right << totalbi << endl;
	
	return 0;
	
}
