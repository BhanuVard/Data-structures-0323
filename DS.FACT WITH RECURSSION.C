#include<stdio.h>
int fact(int);
int main()
{
	int i,a,n;
	printf("enter the value");
	scanf("%d",&n);
	a=fact(n);
	printf("%d",a);
}
	int fact(int n)
	{
		int f;
	if(n==1)
	return 1;
	else
	{
		return(n*fact(n-1));
	}
	
}
