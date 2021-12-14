
int main()
{
	int a,b;
	char op;
	printf("enter a and b");
	scanf("%c",&op);
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case '+':printf("%d",a+b);break;
		case '-':printf("%d",a-b);break;
		case '*':printf("%d",a*b);break;
		case '/':printf("%d",a/b);break;
		case '%':printf("%d",a%b);break;
    }
} 
