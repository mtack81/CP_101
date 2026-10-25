#include <iostream>
using namespace std;

int swapnsum(int &a, int &b);
int swapnsum(int &a, int &b, int &c, int &d);
int swapnsum(int &a, int &b, int &c, int &d, int &e, int &f);

int main()
{
    int a = 1, b = 2;
    int c = 3, d = 4, e = 5, f = 6;
    int g = 7, h = 8, i = 9, j = 10, k = 11, l = 12;
    
    cout << a << " " << b << endl;
    cout << c << " " << d << " " << e << " " << f << endl;
    cout << g << " " << h << " " << i << " " << j << " " << k << " " << l << endl;
    
    cout << "Sum of 2: " << swapnsum(a, b) << endl;
    cout << "Sum of 4: " << swapnsum(c, d, e, f) << endl;
    cout << "Sum of 6: " << swapnsum(g, h, i, j, k, l) << endl;
    
    cout << a << " " << b << endl;
    cout << c << " " << d << " " << e << " " << f << endl;
    cout << g << " " << h << " " << i << " " << j << " " << k << " " << l << endl;
    
    return 0;
}

int swapnsum(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    return a + b;

}

int swapnsum(int &a, int &b, int &c, int &d)
{
    int temp = a;
    a = d;
    d = temp;

    temp = b;
    b = c;
    c = temp;

    return a + b + c + d;
}

int swapnsum(int &a, int &b, int &c, int &d, int &e, int &f)
{
    int temp = a;
    a = f;
    f = temp;

    temp = b;
    b = e;
    e = temp;

    temp = c;
    c = d;
    d = temp;

    return a + b + c + d + e + f;
}
