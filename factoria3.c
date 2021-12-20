#include<stdio.h>
int main()
{
	int i=1,n,f=1;
	printf("enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i=i+1;
	}
	printf("factorial is %d=%d",n,f);
}
