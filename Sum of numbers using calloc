// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n, *num, sum=0;
    
    printf("How many numbers you want to sum?\n");
    scanf("%d",&n);
    
    num=(int *)calloc(n, sizeof(int));
    
    if(num==NULL){
        printf("Memory allocation failed! terminating the program\n");
        return 1;
    }
    
    printf("Enter the numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("The sum of the numbers are %d", sum);
    
    free(num);
   

    return 0;
}
