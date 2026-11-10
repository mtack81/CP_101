#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int winningnumbers[8] = {123, 119, 34, 567, 925, 777, 222, 835};
    int number;
    int index;
    bool found;
    
    cout << "Michigan Daily3 Lottery Check" << endl << endl;
    
    do
    {
        cout << "Please enter winning number? ";
        cin >> number;
        
        if (number < 0 || number > 999)
        {
            cout << "    Number must be only 3 digits" << endl;
        }
    }
    while (number < 0 || number > 999);
    
    found = false;
    
    for (index = 0; index < 8; index++)
    {
        if (winningnumbers[index] == number)
        {
            found = true;
        }
    }
    
    if (found == true)
    {
        cout << endl;
        cout << "Number " << setw(3) << setfill('0') << number << " is a Match !!!!";
        cout << "  You have a winning Ticket!" << endl;
    }
    else
    {
        cout << endl;
        cout << "Sorry " << setw(3) << setfill('0') << number << " did not match your numbers, better luck tomorrow!" << endl;
    }
    
    return 0;
}
