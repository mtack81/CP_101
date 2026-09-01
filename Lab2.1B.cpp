/* Filename: PayrollB.CPP */
// Calculates the Weekly Gross Pay

#include <iostream>
using namespace std;

int main()
{
  float hrpwk,dlphr,yrpay,wkpay; 
      // hrpwk = # hrs/week   dlphr = $ /hour   wkpay = gross weekly pay
  char name[35]="Mike Tackett";
  
  hrpwk = 40.0;
  dlphr = 68.25;
  wkpay = hrpwk * dlphr;
  yrpay = 52 * wkpay;
  cout<<"The weekly pay for "<<name<<" at "<<dlphr<<" for  "<< hrpwk<<" hours a week is $"<<wkpay<<endl; 
  cout<<"Annual Pay is $"<<yrpay<<endl;
  
  return 0;
}


