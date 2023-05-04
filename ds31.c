#include<stdio.h>
int main()
{
	int a,b,res,n,i;
	printf("enter the number of terms:");
	scanf("%d",&n);
	a=0;
	b=1;
	for(i=i;i<=n;i++)
	{
		printf("%d",a);
		res=a+b;
		a=b;
		b=res;
	}
}
