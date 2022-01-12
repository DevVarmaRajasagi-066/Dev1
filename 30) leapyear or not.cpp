#include<stdio.h>
main()
{
	int year;
	printf("Enter the year:");
	scanf("%d", &year);
	if (year%4==0)
	printf("it is a leap year");
	else
	printf("not a leap year");
}
