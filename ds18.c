#include<stdio.h>
int main()
{
	int i,a[15],n,x,low,high,mid,flag=0;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the elements in sorted order");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be search:");
	scanf("%d",&x);
low=0;
high=n-1;
while(low<=high)
{

	mid=(low+high)/2;
	if(x==a[mid])
	{
	printf("\nelement is found");
	flag=1;
}
else if(x<a[mid])
{
	high=mid-1;
}
else 
{
	low=mid+1;
}
}
if(flag==0)
printf("\nelement not found");
}
