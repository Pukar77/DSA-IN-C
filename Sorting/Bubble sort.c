#include<stdio.h>
#include<stdlib.h>

void bubblesort(int a[], int n){
	int i,j,temp;
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}


int main(){
	int i,j,a[10],n;
	
	printf("Enter the number of element of array\n");
	scanf("%d",&n);
	
	printf("Enter %d element\n", n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Element before sorting are\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	bubblesort(a,n);
	
	printf("Element After sorting are\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}