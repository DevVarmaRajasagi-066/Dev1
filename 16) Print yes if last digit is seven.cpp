#include <stdio.h>
int main()
{
	//Given an integer print "yes" if the last digit is 7 and print 'no' otherwise.
    int num, sum=0, lastDigit;
    printf("Enter number = ");
    scanf("%d", &num);
    lastDigit = num % 10;

    
    if(lastDigit==7){
    	printf("yes");
	} else {
		printf("no");
	}
}

