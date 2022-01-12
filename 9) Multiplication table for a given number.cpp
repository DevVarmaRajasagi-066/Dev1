#include<stdio.h>
int main()
{
	//print the multiplication table for any given number.
	int i, n, t;
	printf("Table of: ");
	scanf("%d", &t);
	for(i=1; i<=10; i++)
	{
	n=t*i;
	printf("%d\n",n);	
	}

}
