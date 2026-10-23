//Mike Tackett CP 101 Fall Semester 2026

#include <iostream>
using namespace std;

double thearea(double side);
double thearea(double width, double height);

int main()
{
    int choice;
    
    do
    {
        
        cout << "Choose a Shape:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
    
        if (choice != 1 && choice != 2)
        {
            cout << "Invalid Choice. Try again." << endl;
        }
    } while (choice != 1 && choice != 2);
    
    if (choice == 1)
    {
        double side;

        cout << "Enter the length of the square's side: ";
        cin >> side;
        
        double area = thearea(side);
        cout << "The area of the square is: " << area << endl;
    }
    else
    {
        double width;
        double height;

        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "Enter the height of the rectangle: ";
        cin >> height;
        
        double area = thearea(width, height);
        cout << "The area of the rectangle is: " << area << endl;
    }
    
    return 0;
}

double thearea(double side)
{
    return side * side;
}

double thearea(double width, double height)
{
    return width * height;
}
