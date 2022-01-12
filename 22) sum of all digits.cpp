#include<stdio.h>
int main()
{
//program to find the sum of digits in a given number.

	int num, sum=0;
    scanf("%d", &num);
    
    while(num>0)
    { 
        sum=sum+num%10; 
		num=num/10; 
    }	
    printf("%d", sum);
}

