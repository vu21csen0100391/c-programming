#include<stdio.h>
int main()
{
	int n,i,sum=0,f,x,j;
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=1;i<=n;i=i+1)
	{
		f=1;
		for(j=1;j<=i;j=j+1)
		{
			f=f*j;
		}
		sum=(sum+pow(x,i)/f);
	}
	printf("%d",sum);
}
