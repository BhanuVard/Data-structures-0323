#include <stdio.h>
int main() {
    int arr[50];
    int n,i,j,swap;
    
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
   

    for(i=0;i<n-1;i++) {
        for(j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]){
                swap=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=swap;

            }
        }
    }

    printf("Sorted array: ");
    for(i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}
