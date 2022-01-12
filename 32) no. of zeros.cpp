#include<stdio.h>
int main()
{
	//Given a two digit number, print its digits separately.
	
	int num, m, n=0;
    scanf("%d", &num);
    
    while(num>0)
    {
        m=num%10;
		if(m==0){
			n=n+1;
		}  
        num=num/10;   
    }
    printf("%d", n);

}
