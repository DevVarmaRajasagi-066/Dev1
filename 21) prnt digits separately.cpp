#include<stdio.h>
int main()
{
	//Given a two digit number, print its digits separately.
	
	int num, m;
    scanf("%d", &num);
    
    while(num>0)
    {
        m=num%10;  
        printf("%d\n",m);
        num=num/10;   
    }

}
