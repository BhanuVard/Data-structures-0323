#include<stdio.h>
void main()
{
	int i,n,o_sum=0,e_sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		e_sum=e_sum+i;
		else
		o_sum=o_sum+i;
	}
	printf("sum of even numbers=%d\n",e_sum);
	printf("sum of odd numbers=%d\n",o_sum);
}
