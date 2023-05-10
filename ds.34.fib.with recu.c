#include<stdio.h>
int fibo(int);
int main()
{
	int i,a=0,b=1,n;
	printf("enter the no.of values");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d",fibo(i));
	}

}
	int fibo(int n)
	{
		if(n==0)
		return 0;
		if(n==1)
		return 1;
		else
		{
			return(fibo(n-1)+fibo(n-2));
		}
    }
