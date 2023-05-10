#include<stdio.h>
int fibo(int);
int main()
{
	int i,a,b,c,n;
	printf("enter the no.of values");
	scanf("%d",&n);
	fibo(n);

}
	int fibo(int n)
	{
		int a=0,b=1,c;
		printf("%d\t%d",a,b);
		for(int i=1;i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;
			printf("\t%d",c);
		}
    }
