#include<stdio.h>         
int main()
{
	int a[3],i,sum=0;
	for(i=0;i<3;i++)
	{
		printf("enter a number");
		scanf("%d",&a[i]);
	}
 for(i=0;i<3;i++)
    sum+=a[i];
 
    
    printf("Sum of the array is: %d",sum);
 
    return 0; 
}
