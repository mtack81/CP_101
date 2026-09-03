// box office program

#include <iostream>
using namespace std;

int main()
{
	string movie;
	int adults;
	int seniors;
	int children;
	float prad = 11.50;
	float prsen = 10.00;
	float prchi = 8.50;
	
	cout<< "Box Office Program"<< endl;
<<<<<<< HEAD
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
		
=======
	cout<< "What is the name of the movie?";
	cin>> movie;
	cout<< "How many adults attended?";
	cin>> adults;
	cout<< "How many seniors attended?";
	cin>> seniors;
	cout<< "How many children attended?";
	cin>> children;
	
>>>>>>> ac903a7251440f052020d965e86d7ad0f9e9824b
	float gross = (adults*prad)+(seniors*prsen)+(children*prchi);
	float net = gross*.35;
	float dist = gross*.65;
	
	cout<< "Movie Name:                   "<< "\"" << movie << "\"" << endl;
	cout<< "Adult Tickets Sold:             "<< adults<< endl;
	cout<< "Senior Tickets Sold:            "<< seniors<< endl;
	cout<< "Child Tickets Sold:             "<< children<< endl;
	cout<< "Gross Box Office Profit:      $ "<< gross<< endl;
	cout<< "Net Box Office Profit:        $ "<< net<< endl;
	cout<< "Amount Paid to Distributor:   $ "<< dist<< endl;
	
<<<<<<< HEAD
=======


>>>>>>> ac903a7251440f052020d965e86d7ad0f9e9824b
	return 0;
}
