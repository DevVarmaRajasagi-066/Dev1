#include<stdio.h>
int main()
{
	//To check wheter a given number is a multiple of 7 or not
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
		if(n%7==0){
		printf("%d is a multiple of 7", n);
		}else{
		printf("%d is not a multiple of 7", n);
		}

}
