#include<stdio.h>
int fact(int);
int main()
{
	int i,a,f,n;
	printf("enter the value");
	scanf("%d",&n);
	a=fact(n);
	printf("%d",a);
}
	int fact(int a)
	{
		int f=1;
		for(i=a;i>=1;i--)
		{
			f=f*i;
		}
	
	
	return f;
}
