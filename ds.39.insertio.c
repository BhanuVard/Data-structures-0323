#include <stdio.h>
int main() {
    int arr[50],i,j,key,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

   
    printf("Enter %d elements:\n", n);
    for (int i= 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    for (int i=1;i < n; i++) {
        int key =arr[i];
        int j = i-1;

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = key;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    
    return 0;
}
