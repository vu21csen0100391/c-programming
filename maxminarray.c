#include<stdio.h>
int main()
{
	int a[2];
	printf("Enter two values");
	scanf("%d%d",&a[0],&a[1]);
	if(a[0]>a[1])
	{
		printf("a[0] is maximum and a[1] is minimum");
	}
	else if(a[0]<a[1])
	{
		printf("a[1] is maximum and a[0] is minimum");
	}
	return 0;
}
