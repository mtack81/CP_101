// box office program

#include <stdio.h>

int main()
{
	char movie[50];
	int adults;
	int seniors;
	int children;
	float prad = 11.50;
	float prsen = 10.00;
	float prchi = 8.50;
	
	printf("Box Office Program\n");
	printf("\n");
	printf("What is the name of the movie? ");
	scanf("%s", movie);
	printf( "How many adults attended?  ");
	scanf("%d", &adults);
	printf( "How many seniors attended?  ");
	scanf("%d", &seniors);
	printf("How many children attended? ");
	scanf("%d", &children);
	printf("\n");

	float gross = (adults*prad)+(seniors*prsen)+(children*prchi);
	float net = gross*.35;
	float dist = gross*.65;
	
	printf("Movie Name:                   \"%s\"\n", movie);
	printf("Adult Tickets Sold:             %d\n", adults);
	printf("Senior Tickets Sold:            %d\n", seniors);
	printf("Child Tickets Sold:             %d\n", children);
	printf("Gross Box Office Profit:      $ %.2f\n", gross);
	printf("Net Box Office Profit:        $ %.2f\n", net);
	printf("Amount Paid to Distributor:   $ %.2f\n", dist);
	
	return 0;
}
