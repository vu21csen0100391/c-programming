#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		printf("b is minimum");
	}
	else if (b>c)
	{
		printf("c is minimum");
	}
	else if (c>a)
	{
		printf("a is minimum");
	}
}
