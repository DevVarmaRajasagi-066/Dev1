#include<stdio.h>
int main()
{
	//To print the sum of all even numbers within a given range
	int i, n=0, r;
	printf("Enter the begining of the range: ");
	scanf("%d", &i);
	scanf("%d", &i);
	printf("Enter the ending of the range: ");
	scanf("%d", &r);
	for ( i=1; i<=r; i++)
	{
		if(i%2==0){
		n=i+n;
	}
	}
	printf("The sum is: %d",n);

}
