// Michael Tackett CP101 Fall Semester 2026

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float array1[3][3][3];
    float array2[3][3][3] = {{{5.0}}};
    
    cout << "First array:" << '\n';

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << setw(10) << array1[i][j][k];
            }
            cout << '\n';
        }
        cout << '\n';
    }
    
    cout << "Second array:" << '\n';

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << setw(10) << array2[i][j][k];
            }
            cout << '\n';
        }
        cout << '\n';
    }
    
    return 0;
    
}
