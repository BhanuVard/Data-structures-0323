#include<stdio.h>
int main()
{
    int a[10],min,i;
    printf("Enter any elements: ");
   for(i=0;i<10;i++)
    scanf("%d",&a[i]);
   
    i=0;
    min=a[i];
    while(i<10)
    {
        if(min>a[i])
            min =a[i];
        i++;
    }
    printf("\nsmallest number=%d",min);
    return 0;
}
