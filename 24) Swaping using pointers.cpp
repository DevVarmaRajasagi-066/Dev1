#include<stdio.h>
     int main(){
     	int a, b, temp;
     	int *ptr, *pptr;
     	scanf("%d", &a);
     	scanf("%d", &b);
     	ptr = &a;
     	pptr = &b;
     	
     	temp=*ptr;
     	*ptr=*pptr;
     	*pptr=temp;
     	
     	printf("a=%u, b=%u", *ptr, *pptr);

}



     	
     	
