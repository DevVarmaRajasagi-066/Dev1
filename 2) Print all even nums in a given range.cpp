#include<stdio.h>
int main()
{
	//Program to print all even numbers in a given range
	int i, n=0, r;
	printf("What number is the start of the range?: ");
	scanf("%d", &i);
	printf("What number is the end of the range?: ");
	scanf("%d", &r);
	for ( i; i<=r; i++)
	{
		if(i%2==0){
		printf("%d\n", i);
	}
	}
}
