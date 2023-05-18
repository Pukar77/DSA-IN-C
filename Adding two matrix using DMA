
#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,row,column,row1,column1;
int **matrix, **matrix1, **matrix2;

printf("Enter the number of rows for the matrix\n");
scanf("%d",&row);
printf("Enter the number of colums for the matrix\n");
scanf("%d",&column);


matrix=(int **)malloc(row* sizeof(int*));
if(matrix==NULL){
    printf("Memory allocation failed\n");
    exit(1);
}

for(i=0;i<row;i++){
    matrix[i]=(int*)malloc(column*sizeof(int));
}
if(matrix==NULL){
    printf("Memory allocation failed\n");
    exit(1);
}

matrix1=(int**)malloc(row*sizeof(int*));
if(matrix==NULL){
    printf("Memory allocation failed\n");
    exit(1);
}
matrix2=(int **)malloc(row* sizeof(int*));
if(matrix2==NULL){
    printf("Memory allocation failed\n");
    exit(1);
}

for(i=0;i<row;i++){
    matrix2[i]=(int*)malloc(column*sizeof(int));
}
if(matrix2==NULL){
    printf("Memory allocation failed\n");
    exit(1);
}

for(i=0;i<row;i++){
 matrix1[i]=(int*)malloc(row*sizeof(int));
}
if(matrix==NULL){
    printf("Memory allocation failed\n");
    exit(1);
}
printf("Enter the element of first matrix\n");
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

printf("Enter the element of second matrix\n");
for(i=0;i<row;i++){
    for(j=0;j<column;j++){
     scanf("%d",&matrix1[i][j]);
    }
}
printf("You entered the following matrix\n");
for(i=0;i<row;i++){
    for(j=0;j<column;j++){
        printf("%d\t",matrix1[i][j]);
    }
    printf("\n");
}
for(i=0;i<row;i++){
    for(j=0;j<column;j++){
        matrix2[i][j]=matrix[i][j]+matrix1[i][j];
    }
}
printf("The matrix after addition is\n");
for(i=0;i<row;i++){
    for(j=0;j<column;j++){
        printf("%d\t",matrix2[i][j]);
    }
    printf("\n");
}
// Free the dynamically allocated memory
    for (i = 0; i < rows1; i++) {
        free(matrix1[i]);
    }
    for (i = 0; i < rows2; i++) {
        free(matrix2[i]);
    }
    for (i = 0; i < rows1; i++) {
        free(sum[i]);
    }
    free(matrix1);
    free(matrix2);
    free(sum);




    return 0;
}
