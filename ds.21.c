#include<stdio.h>
int main()
{
    int arr[10];
    int i,n,ele,j,found=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
  printf("Enter the value of the element to be deleted:\n");
    scanf("%d",&ele);
 for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            found=1;
            ele=i;
            break;
        }
    }
 
    if(found==1)
    {
        for(j=i;j<n-1;j++)
        {
            arr[i]=arr[j+1];
        }
 
        printf("The array after deleting the element is:\n");
        for(j=0;j<n-1;j++)
        {
 printf("%d\n",arr[i]);
        }
 
    }
    else
    printf("Element %d is not found in the array\n",ele);
}
