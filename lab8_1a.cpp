//Mike Tackett K0475835 CP 101 Fall Semester

#include <iostream>
#include <iomanip>
using namespace std;

// Write the prototypes for the getArea,
// getHeight, getBase, and displayData
// functions here.
float getHeight();
float getBase();
float getArea(float height, float base);
void displayData(float height, float base, float area);

int main()
{
   float height,    // The triangle's Height
          base,     // The triangle's base
          area;      // The triangle's area
          
   // Get the triangle's height
   height = getHeight();
   
   // Get the triangle's base.
   base = getBase();
   
   // Get the triangle's area.
   area = getArea(height,base);
   
   // Display the triangle's data.
   displayData( height, base, area);
          
   cin.get();
   cin.get();
   return 0;
}

float getHeight()
{
   float height;
   
   do {
      cout << "Enter the triangle's height: ";
      cin >> height;
      
      if (height < 0) {
         cout << "Error: Height cannot be negative.\n";
      }
   } while (height < 0);
   
   return height;
}

float getBase()
{
   float base;
   
   do {
      cout << "Enter the triangle's base: ";
      cin >> base;
      
      if (base < 0) {
         cout << "Error: Base cannot be negative.\n";
      }
   } while (base < 0);
   
   return base;
}

float getArea(float height, float base)
{
   return (base * height) * 0.5;
}

void displayData(float height, float base, float area)
{
   cout << fixed << setprecision(2);
   cout << "\nTriangle Data:" << endl;
   cout << "Height: " << height << endl;
   cout << "Base: " << base << endl;
   cout << "Area: " << area << endl;
}
