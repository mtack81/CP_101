//Mike Tackett CP101 Fall Semester 2026


#include <iostream>
using namespace std;

float somefunction(float *, float * ,float* );


int main()
{   float sum, x=5.0f,y=5.5f,z=6.25f;
    cout<<"Original"<<endl;
    cout<<"x= "<<x<<" y= "<<y<<" z= "<<z<<endl;
    sum=somefunction(&x,&y,&z);
    cout<<endl<<"After Function call"<<endl;
    
	cout<<"x= "<<x<<" y= "<<y<<" z= "<<z<<endl;
	cout<<"sum = "<<sum<<endl;
	return 0;
}


float somefunction(float *a, float *b ,float *c )
{  *a*=7;
   *b*=8;
   *c*=9;
   return *a+*b+*c;
}
