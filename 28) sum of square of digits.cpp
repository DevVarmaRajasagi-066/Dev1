#include<stdio.h>
#include<math.h>
int main()
{
 int num,sum=0,r;
 scanf("%d",&num);
 do
 {
      r=num%10;
      sum=sum+pow(r,2);
      num=num/10;
 }
 while(num%10!=0);
 printf("%d",sum);
}
