#include<stdio.h>
int main()
{
	int a,b,c,x;
	printf("enter a,b,c");
	scanf("%d%d%d",&a,&b,&c);
    x=((b*b)-4*(a*c));
    if (x>0)
    {
    	printf("real roots");
	}
	else 
	{
		printf("imaginary roots");
	}
}
