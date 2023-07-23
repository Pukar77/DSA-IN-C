#include<stdio.h>
#include<stdlib.h>

void search(int a[],int key,int n){
	int i,flag;
	for(i=0;i<n;i++){
		if(a[i]==key){
			printf("%d found in %d index",key,i);
			flag=0;
		}
	}
	if(flag!=0){
		printf("Not found\n");
	}
}

int main(){
	int a[10],key,i,n;
	
	printf("Enter the size of array\n");
	scanf("%d",&n);
	
	printf("Enter the element of array\n");
	for(i=0;i<n;i++){	
	scanf("%d",&a[i]);
}

printf("You entered following array\n");
 for(i=0;i<n;i++){
 	printf("%d\t",a[i]);
 }
 
 printf("\nEnter the element to search\n");
 scanf("%d",&key);
 
 search(a,key,n);
}