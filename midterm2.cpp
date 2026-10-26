//Tulip bulb planting calc

#include <iostream>
#include <iomanip>
using namespace std;

float width;
float length;
float price = 19.98;
int bag = 40;

int main()
{
    cout << "***** Michael Tackett CP101 Midterm Prog Exam 02 ********" << endl << endl;
    cout << "Fall 2026 Tulip Bulb bed Planting" << endl << endl;
    cout << "What is the Width of the flower bed(in Feet)? ";
    cin >> width;
    cout << "What is the length of the flower bed(in feet)? ";
    cin >> length;
    
    float area = (width * length);
    int bulb = (area * 5);
    int bag = (bulb / 40);
    
    cout << "The Tulip Flower Bed the gardener intends to plant is " << area << "sqft" << endl;
    cout << bulb << " Tulip Bulbs will be required" << endl;
    cout << "You will need to purchase " << fixed << setprecision(1) << bag  << " bag at a cost of $ " << setw(2) << (bag * 19.98) << endl;
    
    return 0;
}
