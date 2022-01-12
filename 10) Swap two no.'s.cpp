#include<stdio.h>
main() 
{
	//Program to swap two numbers.
	int a, b, temp;
	printf("Enter the a value ");
	scanf("%d",&a);
	printf("Enter the b value ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d", a);
	printf("\n%d", b);
}
