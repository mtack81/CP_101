#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

cout<<"Here's a string to get the ball rolling."<<endl<<endl;
cout<<"\aRing the Bell to get some attention (or annoy?)"<<endl;
cout<<"The first 5 prime numbers "<<1<<" "<<2<<" "<<3<<" "<<5<<" & "<<7<<endl<<endl;
cout.setf(ios::fixed|ios::showpoint);
cout<<setprecision(3);
cout<<"If I babysit "<< 2.5<<" hours at $"<<setprecision(2)<<6.;
cout<<" I will earn a gross pay of $" <<(6*2.5)<<endl<<endl;
cout<<"Yippy Skippy!!!";

return 0;
}
