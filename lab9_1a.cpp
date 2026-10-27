//Mike Tackett CP 101 Fall Semester 2026

#include <iostream>
using namespace std;

double thearea(double side);
double thearea(double width, double height);

int main()
{
    double side = 4.0;
    double width = 4.0;
    double height = 5.0;

    cout << "Area of square: " << thearea(side) << endl;
    cout << "Area of rectangle: " << thearea(width, height) << endl;

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
