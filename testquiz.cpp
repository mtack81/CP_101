//Michael Tackett k0475835 Fall Semester 15:57 11/17/26

#include <iostream>
using namespace std;

int main()
{
	int count;
	float weights[64];
	int index;
	int smallest;
	int search;
	int temp;
	
	cout << "***** Michael Tackett CP101 Midterm Prog Exam 03 ********" << endl << endl;
	cout << "Fall 2026 Bruin Pumpkin Patch Weigh-In" << endl << endl;
	
	do
    {
        cout << "How many pumpkins are being weighed (2-15)? ";
        cin >> count;
                
        if (count < 2 || count > 15)
        {
            cout << "***   Number of pumpkins must be 2-15 please try again***" << endl;
        }
    }
    
    while (count < 2 || count > 15);
    
    for (index = 0; index < count; index++)
    {
		cout << "What is the weight of pumpkin#" << index + 1 << " (in lbs)? ";
		cin >> weights[index];
	}
	
	cout << endl;
	
	for (index = 0; index < count - 1; index++)
    {
        smallest = index;
        
        for (search = index + 1; search < count; search++)
        {
            if (weights[search] < weights[smallest])
            {
                smallest = search;
            }
        }
        
        temp = weights[smallest];
        for (search = smallest; search > index; search--)
        {
            weights[search] = weights[search - 1];
        }
        
        weights[index] = temp;
    }

    cout << "Pumpkin weights from lightest to heaviest:" << endl;
    for (index = 0; index < count; index++)
    {
        cout << weights[index] << " ";
    }
    cout << endl << endl;
    cout << "Heaviest pumpkin: " << weights[count-1] << endl; 
    cout << "The lowest number is " << weights[0] << endl;
    cout << "Total weight: " << " lbs" << endl; // no idea how to figure
    cout << "Average weight: " << "lbs" << endl; // no idea how to figure
    
    // int crates = (total/50) ceiling somewhere in here to round up but not in the fucking notes
    cout << "You will need " << " crates to ship them." << endl;
    
     	
        	
    return 0;
	
}	
