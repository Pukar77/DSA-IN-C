
#include <stdio.h>

int main() {
   int i,n, a[10],p,e;
   
   printf("Enter how many number you want to put in aray\n");
   scanf("%d",&n);
   
   printf("Enter the element of the array\n");
   
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   
   printf("The element of the array before inserting element are \n");
   for(i=0;i<n;i++){
       printf("%d\t \n",a[i]);
   }
   printf("Enter the position where you want to insert \n");
   scanf("%d",&p);
   printf("Enter the element which you want to insert\n");
   scanf("%d",&e);
   p--;
   
   for(i=n-1; i>=p;i--){
       a[i+1]=a[i];
   }
   a[p]=e;
   n=n+1;
   
     printf("The array after inserting the numbers are\n");
   for(i=0;i<n;i++){
   printf("%d\t",a[i]);
   }
   
   
    return 0;
}
