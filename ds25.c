#include <stdio.h>

int main() {
    int arr[3][4];
    int i, j;
    
    printf("Enter the elements of the array:\n");
    
   
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Elements of the array:\n");
    
   
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
         printf("\n");
    }
    
    return 0;
}
