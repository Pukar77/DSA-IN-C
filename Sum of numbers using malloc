
#include <stdio.h>
#include <stdlib.h>
int main() {
  int i,n,*num,sum=0;
  
  printf("How many number do you want to sum?\n");
  scanf("%d",&n);
  
  num=(int *)malloc(n * sizeof(int));
  
  if(num==NULL){
      printf("Memory allocation failed !\n");
      return 1;
  }
  
  printf("Enter the elements\n");
  for(i=0;i<n;i++){
      scanf("%d",&num[i]);
      sum=sum+num[i];
  }
  
  printf("The sum of the numbers is %d", sum);
  
  free(num);

    return 0;
}
