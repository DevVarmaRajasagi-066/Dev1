#include <stdio.h>
int main()
{
	// Program to change the case of a letter.
    char ch;
    scanf("%c", &ch);
    
    if(ch<97)
    ch=ch+32;
    else
    ch=ch-32;
    
    printf("%c", ch);
    
}
