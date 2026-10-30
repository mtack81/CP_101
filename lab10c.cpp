// Michael Tackett CP 101 Fall Semester 2026

#include <iostream>
#include <iomanip>
using namespace std;

void getArray(float row1[], float row2[], float row3[]);
void outArray(const float row1[], const float row2[], const float row3[]);
float dtmntArray(const float row1[], const float row2[], const float row3[]);

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
        
        getArray(row1, row2, row3);
    
        cout << endl;
        cout << "The Matrix is:" << endl;  
        
        outArray(row1, row2, row3); 
        
        determinant = dtmntArray(row1, row2, row3);
        
        cout << "Determinant: " << fixed << setprecision(3) << determinant << endl;
        
        cout << "Would you like to do another matrix (Y/N)?" << endl;
        cin >> again;
    }
    while (again == 'Y' || again == 'y');
    
    return 0;
}

void getArray(float row1[], float row2[], float row3[])
{
    cout << "What is Row 1 of the matrix?" << '\n';
    cin >> row1[0] >> row1[1] >> row1[2];

    cout << "What is Row 2 of the matrix?" << '\n';
    cin >> row2[0] >> row2[1] >> row2[2];

    cout << "What is Row 3 of the matrix?" << '\n';
    cin >> row3[0] >> row3[1] >> row3[2];
}

void outArray(const float row1[], const float row2[], const float row3[])
{
    cout << fixed << setprecision(3);

    cout << row1[0] << '\t' << row1[1] << '\t' << row1[2] << '\n';
    cout << row2[0] << '\t' << row2[1] << '\t' << row2[2] << '\n';
    cout << row3[0] << '\t' << row3[1] << '\t' << row3[2] << '\n';
}

float dtmntArray(const float row1[], const float row2[], const float row3[])
{
    float determinant;

    determinant = (row1[0] * row2[1] * row3[2]) +
                  (row1[1] * row2[2] * row3[0]) +
                  (row1[2] * row2[0] * row3[1]) -
                  (row1[1] * row2[0] * row3[2]) -
                  (row1[0] * row2[2] * row3[1]) -
                  (row1[2] * row2[1] * row3[0]);

    return determinant;
}
