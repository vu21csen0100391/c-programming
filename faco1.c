#include<stdio.h>
int fact(int x);
int main(void)
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	fact(n);
	return 0;
}
int fact(int x)
{
	int i,f=1;
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	printf("%d",f);
}
