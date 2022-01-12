#include<stdio.h>
int main()
{
	//Given two integers, print "yes", if exactly one of them is odd, print "no" otherwise
	int num1, num2, a=0, b=0, c;
	printf("Enter a value: ");
	scanf("%d", &num1);
	printf("Enter a value: ");
	scanf("%d", &num2);
	
	if(num1%2!=0){
		a=1;
	}
	if(num2%2!=0){
		b=1;
	}
	c=a+b;
	if(c==0){
		printf("no");
	}else{
		printf("yes");
	}
	
}

