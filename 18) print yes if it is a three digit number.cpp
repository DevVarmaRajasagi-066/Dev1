#include<stdio.h>
int main() 
{
	//Given an integer, print "yes" if it is a three digit number, print "no" otherwise. 
  int num, count=0;
  printf("Enter a number: ");
  scanf("%d", &num);
 

  do{
    num= num/10;
    ++count;
  }while(num!=0);
 
	if(count==3){
		printf("yes");
	}else{
		printf("no");
	}
}
