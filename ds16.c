#include<stdio.h>
int main()
{
    int a[10],max,i;
    printf("Enter any elements: ");
   for(i=0;i<10;i++)
    scanf("%d",&a[i]);
   
    i=0;
    max=a[i];
    while(i<10)
    {
        if(max<a[i])
            max=a[i];
        ++i;
    }
    printf("\ngreatest number=%d",max);
    return 0;
}
