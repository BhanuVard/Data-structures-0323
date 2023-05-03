#include<stdio.h>
int main() {
	 int n,i,sum=0;
	 i=1;
	 while(i<=5)
	 {
    printf("Enter any five numbers: ");
    scanf("%d",&n);

        sum=sum+i;
        ++i;
    }
   printf("sum of values=%d",sum);
    return 0;
}   

