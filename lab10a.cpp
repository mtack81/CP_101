#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int numbers[12];
    
    for (int &number : numbers)
    {
        number = rand() % 100;
    }
    
    cout << "Twelve values generated ";
    
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;
    
    int smallest = numbers[0];
    int smallestindex = 0;
    
    for (int i = 1; i < 12; i++)
{
    if (numbers[i] < smallest)
    {
        smallest = numbers[i];
        smallestindex = i;
    }
}

    cout << "Smallest Value is " << smallest;
    cout << " at index " << smallestindex << endl;
    
    
    return 0;
}
