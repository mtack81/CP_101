//Mike Tackett CP101 Fall Semester 2026
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int books;
	int index;
	int students[8];
	
	cout << "Bruin Reading Challenge 2026" << endl << endl;
	
	do
    {
        cout << "How many in the challenge (2-8)? ";
        cin >> students;
                
        if (students[index] < 2 || students[index] > 8)
        {
            cout << "Must be between 2 and 8, try again" << endl;
        }
    }
    
    while (students[index] < 2 || students[index] > 8);
	
	do
	{
		for (index = 0; index < students[index]; index++)
		{	
			cout << "Enter books read by student: ";
			cin >> books;
		}
		if (books < 0 || books > 40)
		{
			cout << "Books must be 0-40, try again" << endl;
		}
	}
	while (books < 0 || books > 40);
	
	return 0;
	
}
