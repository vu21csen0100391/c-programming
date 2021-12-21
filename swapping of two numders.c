#include<stdio.h>
void swapping();
void main()
{
	swapping();
	
}
void swapping()
{
	int a,b,c;
	printf("enter any 2 integers");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d",c);
	
}
