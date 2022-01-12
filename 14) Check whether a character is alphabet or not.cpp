#include<stdio.h>
main()
{
	//To check whether a given character is alphabet or not
	char x;
	printf("Enter a character ");
	scanf("%c", &x);
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'z'))
    printf("is a alphabet");
	else	
	printf("is not an alphabet");
	
}
