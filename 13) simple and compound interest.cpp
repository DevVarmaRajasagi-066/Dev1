#include<stdio.h>
#include<math.h>

int main()
{
	//Program to find compund interest
	 float p, r, t, si, ci;
	 printf("Enter principal amount: ");
	 scanf("%f", &p);
	 printf("Enter interest rate in percent: ");
	 scanf("%f", &r);
	 printf("Enter time in year: ");
	 scanf("%f", &t);
	
	 si = p* (1+ r*t);
	
	 ci = p * (pow((1+r/100), t));
	
	 printf("Simple Interest = %f\n", si);
	 printf("Compound Interest = %f", ci);
}
