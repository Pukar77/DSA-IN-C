#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,n,*ptr,largest;
		printf("Enter the size of the array\n");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n* sizeof(int));
	
if(ptr == NULL){
	printf("Memory allocation failed!");
	return 1;
}

	printf("Enter the element of the array\n");
	for(i=0;i<n;i++){
	scanf("%d",&ptr[i]);	
	}
		largest=ptr[0];
	for(i=0;i<n;i++){
	
		if(largest<ptr[i]){
			largest=ptr[i];
		}
	}
	printf("The largest element of the array is %d",largest);
	free(ptr);
	return 0;
	
	
}
