// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i,n, a[10],p,e;
   
   printf("Enter how many number you want to put in aray\n");
   scanf("%d",&n);
   
   printf("Enter the element of the array\n");
   
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   
   printf("The element of the array before deleting element are \n");
   for(i=0;i<n;i++){
       printf("%d\t \n",a[i]);
   }
   printf("Enter the position where you want to delete \n");
   scanf("%d",&p);
   --p;
   
   for(i=p; i<n-1;i++){
    a[i]=a[i+1];
   }
   n=n-1;
   
     printf("The array after deleting the number are\n");
   for(i=0;i<n;i++){
   printf("%d\t",a[i]);
   }
   
   
    return 0;
}
