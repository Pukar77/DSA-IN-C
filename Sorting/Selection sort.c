#include<stdio.h>
#include<stdlib.h>

void selectionsort(int a[], int n){
	int i,j,min,temp;
	
	for(i=0;i<n-1;i++){
	     min=i;
	     
	     for(j=i+1;j<n;j++){
	     	if(a[min]>a[j]){
	     		min=j;
			 }
		 }
	
	if(min!=i){
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		}
	}
}



int main(){
	
	int a[10],i,j,n;
	
	printf("Enter the number of element of array\n");
	scanf("%d",&n);
	
	printf("Enter %d element\n", n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("The elements before sorting are\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	selectionsort(a,n);
	
	printf("\nThe element after sorting are\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	
	return 0;
}