#include<stdio.h>
int main()
{
	int n,x,r;
	printf("enter n");
	scanf("%d",&n);
	while(n!=0)
	{
		x=n%10;
		r=r*10+x;
		n=n/10;
	}
	printf("reverse number =%d",r);
}
