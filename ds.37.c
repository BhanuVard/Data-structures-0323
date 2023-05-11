#include<stdio.h>
int main()
{
    int arr[10], i,n,num, pos;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("\nEnter a Number to Search: ");
    scanf("%d", &num);
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            pos=i;
            break;
        }
    }
    printf("\nFound at Index No.%d", pos);
    
    return 0;
}
