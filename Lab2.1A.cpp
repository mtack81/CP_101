/* Filename: PayrollA.CPP */
// Calculates the Weekly Gross Pay

#include <stdio.h>

using namespace std;

int main()
{
  float hrpwk,dlphr,yrpay,wkpay; 
      // hrpwk = # hrs/week   dlphr = $ /hour   wkpay = gross weekly pay
  char name[35]="Mike Tackett";
  
  hrpwk = 40.0;
  dlphr = 67.75;
  wkpay = hrpwk * dlphr;
  yrpay = 52 * wkpay;
  
  printf("The weekly pay for %s at $%.2f for  %.2f hours a week is $ %.2f\n"
                ,name, dlphr, hrpwk, wkpay);
    printf("Annual Pay would be $%.2f\n"
    ,yrpay);

  return 0;
}

