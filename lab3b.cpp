// box office program
// Box office program - declares int/float/string variables, takes user input,
// calculates gross/net profit, formats output with manual spacing (spacebar alignment)

#include <iostream>
using namespace std;

int main()
{
// string, int, and float declared together - each holds a different kind of data:
// string = text, int = whole numbers, float = decimals (ticket prices)
	string movie;
	int adults;
	int seniors;
	int children;
	float prad = 11.50;
	float prsen = 10.00;
	float prchi = 8.50;
	
	cout<< "Box Office Program"<< endl;
	cout<< endl;
	cout<< "What is the name of the movie? ";
	cin>> movie;
	cout<< "How many adults attended? ";
	cin>> adults;
	cout<< "How many seniors attended? ";
	cin>> seniors;
	cout<< "How many children attended? ";
	cin>> children;
	cout<< endl;

	float gross = (adults*prad)+(seniors*prsen)+(children*prchi);
	float net = gross*.35;
	float dist = gross*.65;
// Output columns aligned manually using spaces inside the strings
// (works here, but breaks if input length varies - setw() from <iomanip>
// is the more reliable way to align columns, used in later labs)
	cout<< "Movie Name:                   "<< "\"" << movie << "\"" << endl;
	cout<< "Adult Tickets Sold:             "<< adults<< endl;
	cout<< "Senior Tickets Sold:            "<< seniors<< endl;
	cout<< "Child Tickets Sold:             "<< children<< endl;
	cout<< "Gross Box Office Profit:      $ "<< gross<< endl;
	cout<< "Net Box Office Profit:        $ "<< net<< endl;
	cout<< "Amount Paid to Distributor:   $ "<< dist<< endl;
	
	return 0;
}
