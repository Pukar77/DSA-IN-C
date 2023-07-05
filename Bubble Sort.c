#include <stdio.h>
#include<stdlib.h>
int main() {
 int n,i,j,a[10],temp;
 printf("Enter the number of element of array\n");
 scanf("%d",&n);
 
 printf("Enter %d numbers\n", n);
 for(i=0;i<n;i++){
     scanf("%d",&a[i]);
 }
 
 printf("Before Sorting\n");
 for(i=0;i<n;i++){
     printf("%d\t",a[i]);
 }
 
 printf("\nAfter sorting\n");
 for(i=0;i<n;i++){
     for(j=0;j<n-i-1;j++){
         if (a[j]>a[j+1]){
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }
     }
 }
 for(i=0;i<n;i++){
 	printf("%d\t",a[i]);
 }
 
 

    return 0;
}