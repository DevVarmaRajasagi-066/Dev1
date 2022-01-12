#include <stdio.h>
main()
{
	//To check whether a person is eligible for voting or not.
	int age;
	printf("Enter your age:");
	scanf("%d", &age);
	if(age>=18)
	printf("You are eligible to vote");
	else
	printf("You are not eligible to vote");

}
