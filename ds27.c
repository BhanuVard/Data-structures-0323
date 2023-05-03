#include<stdio.h>  
int main() {  
    // Declare a 2D array with 3 rows and 4 columns  
    int matrix[3][4],i,j;  
      
    // Assign values to the matrix  
    for(i=0;i<3;i++) {  
        for(j=0;j<4;j++) {  
            matrix[i][j] = i * 4 + j;  
        }  
    }  
      
    // Print the matrix  
    for (i = 0; i < 3; i++) {  
        for(j = 0; j < 4; j++) {  
            printf("%d ", matrix[i][j]);  
        }  
        printf("\n");  
    }  
      
    return 0;  
}
