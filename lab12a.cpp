//Mike Tackett CP101 Fall Semester 2026
//Pointers

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	double ar_x[24];
	int s;
	int u;
	int v;
	int *pts = &s;
	int *ptu = &u;
	int *ptv = &v;
	double *pxa = &ar_x[8];
	double *pxb = &ar_x[19];
	
	cout << "What is the value of s? ";
	scanf(" %d", pts);
	cout << "What is the value of u? ";
	scanf(" %d", ptu);
	cout << "What is the value of v? ";
	scanf(" %d", ptv);
	cout << "s is at " << pts << " and holds " << *pts << endl;
	cout << "u is at " << ptu << " and holds " << *ptu << endl;
	cout << "v is at " << ptv << " and holds " << *ptv << endl;
	cout << "The sum is " << *pts + *ptu + *ptv << endl;
	cout << "s divided by v is " << (double)*pts / *ptv << endl;
	cout << "u multiplied by v is " << *ptu * *ptv << endl;
	cout << "The difference between pxb and pxa is " << pxb - pxa << endl;
	cout << "The address of pxa is " << pxa << endl;
	cout << "When you bump pxa up by 1 it becomes " << ++pxa << endl;
	
	return 0;
	
}
