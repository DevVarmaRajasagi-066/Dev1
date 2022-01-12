#include<stdio.h>
int main()
{
	int a, b, i, c;
	// a=start value, b=end value, i=for statement value, c=conditional value
	scanf("%d", &a);
	scanf("%d",&b);
	while(a<b)
	{
		c=0;
	for(i=2; i<=a/2; i++)
	{
		if(a%i==0)
		{
		c=1; 
		break;
		}
	}
	if(c==0)
		printf("%d\n", a);
		a++;
	}
}


