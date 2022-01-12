#include<stdio.h>
int main()
{
	//Program to print all odd numbers in a given range
	int i, n=0, r;
	printf("Enter the begining of the range: ");
	scanf("%d", &i);
	printf("Enter the ending of the range: ");
	scanf("%d", &r);
	for ( i; i<=r; i++)
	{
		if(i%2!=0){
		printf("%d\n", i);
	}
	}
}
