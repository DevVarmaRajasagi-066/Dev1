#include<stdio.h>
int main()
{
	//Find sum of all natural numbers 1 to n.
	int i, num, sum=0;
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		sum=i+sum;
	} 
	printf("%d", sum);
}
