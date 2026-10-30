// Michael Tackett CP 101 Fall Semester 2026

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float row1[3];
    float row2[3];
    float row3[3];
    
    float determinant;
    char again;
    
    do
    {
        cout << "Calculation of 3 x 3 Determinant" << endl;
    
        cout << "What is Row 1 of the matrix?" << endl;
        cin >> row1[0] >> row1[1] >> row1[2];
    
        cout << "What is Row 2 of the matrix?" << endl;
        cin >> row2[0] >> row2[1] >> row2[2];
    
        cout << "What is Row 3 of the matrix?" << endl;
        cin >> row3[0] >> row3[1] >> row3[2];
        
        cout << endl;
        cout << "The Matrix is:" << endl;   

        cout << row1[0] << " " << row1[1] << " " << row1[2] << endl;
        cout << row2[0] << " " << row2[1] << " " << row2[2] << endl;
        cout << row3[0] << " " << row3[1] << " " << row3[2] << endl;
        
        determinant = (row1[0] * row2[1] * row3[2]) +
                      (row1[1] * row2[2] * row3[0]) +
                      (row1[2] * row2[0] * row3[1]) -
                      (row1[1] * row2[0] * row3[2]) -
                      (row1[0] * row2[2] * row3[1]) -
                      (row1[2] * row2[1] * row3[0]);
                      
        cout << "Determinant: " << fixed << setprecision(3) << determinant << endl;
        
        cout << "Would you like to do another matrix (Y/N)?" << endl;
        cin >> again;
    }
    while (again == 'Y' || again == 'y');
    
    return 0;
}
