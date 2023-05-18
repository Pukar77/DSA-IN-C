
#include <stdio.h>
#include <stdlib.h>
int main() {
  int row, column, i, j;
  int **matrix;
  
  printf("Enter the numbers of row\n");
  scanf("%d",&row);
  
  printf("Enter the number of colum\n");
  scanf("%d", &column);
  
  matrix= (int **)malloc(row * sizeof(int *));
  if(matrix==NULL){
      printf("Memory allocation failed. Exiting..");
      return 1;
  }
  
  for(i=0;i<row;i++){
      matrix[i]=(int *)malloc(column* sizeof(int*));
  }
  if(matrix==NULL){
      printf("Memory alllocation failed, Exiting\n");
      return 1;
  }
   printf("Enter the element of the array\n");
  for(i=0;i<row;i++){
      for(j=0;j<column;j++){
         scanf("%d",&matrix[i][j]);
      }
  }
  
  printf("You entered the following matrix\n");
  for(i=0;i<row;i++){
      for(j=0;j<column;j++){
          printf("%d\t",matrix[i][j]);
      }
      printf("\n");
  }
  
  //freeing the memory location
  
  for(i=0;i<row;i++){
  	free(matrix[i]);
  }
  free(matrix);

    return 0;
}
