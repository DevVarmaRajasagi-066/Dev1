#include<stdio.h>
int main()
{
//given an integer. print its tens digit

int num, remainder, digit;
scanf("%d", &num);
remainder=num%100;
digit= remainder/10;

printf("%d", digit);

}
