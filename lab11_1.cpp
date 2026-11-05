#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int numbers[18];
    int count;
    int index;
    int highest;
    int lowest;
    int smallest;
    int temp;
    int search;
    
    cout << "Data Searching and Sorting!!" << endl << endl << endl;
    
    do
    {
        cout << "How many numbers would you like to be generated(2-18)? ";
        cin >> count;
                
        if (count < 2 || count > 18)
        {
            cout << "Sorry, that is invalid try again." << endl;
        }
    }
    
    while (count < 2 || count > 18);
    
    cout << endl << endl;
    
    srand(time(0));
    
    for (index = 0; index < count; index++)
    {
        numbers[index] = rand() % 100 + 1;
    }
    
    cout << "The " << count << " numbers generated are: " << endl;
    
    for (index = 0; index < count; index++)
    {
        cout << numbers[index] << " ";
    }
    cout << endl << endl << endl;
    
    highest = numbers[0];
    lowest = numbers[0];
    
    for (index = 1; index < count; index++)
    {
        if (numbers[index] > highest)
        {
            highest = numbers[index];
        }
        if (numbers[index] < lowest)
        {
            lowest = numbers[index];
        }
    }
    
    cout << "The Highest number is " << highest << endl;
    cout << "The Lowest number is " << lowest << endl << endl << endl;
    
    for (index = 0; index < count -1; index++)
    {
        smallest = index;
        
        for (search = index + 1; search < count; search++)
        {
            if (numbers[search] < numbers[smallest])
            {
                smallest = search;
            }
        }
        
        temp = numbers[smallest];
        for (search = smallest; search > index; search--)
        {
            numbers[search] = numbers[search - 1];
        }
        
        numbers[index] = temp;
    }
    
    cout << "The " << count << " numbers in Ascending Order: " << endl;

    for (index = 0; index < count; index++)
    {
        cout << numbers[index] << " ";
    }

    cout << endl << endl << endl;

    cout << "The " << count << " numbers in Descending Order: " << endl;

    for (index = count - 1; index >= 0; index--)
    {
        cout << numbers[index] << " ";
    }

    cout << endl;
    
    return 0;
}
