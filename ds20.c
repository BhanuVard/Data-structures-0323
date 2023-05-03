#include<stdio.h>
int main()
{
	int a[15];
	int i,n,x,j,ele;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}
		printf("enter a element to insert:");
		scanf("%d",&ele);
		printf("enter a position to be insert:");
		scanf("%d",&x);
		for(j=n-1;j>=x;j--)
		{
			a[j+1]=a[j];
		}
		a[j]=ele;
		for(i=0;i<=n;i++)
		printf("\nafter insertion:");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
}
