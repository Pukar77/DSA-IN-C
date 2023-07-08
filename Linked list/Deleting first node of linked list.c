#include<stdio.h>
#include<stdlib.h>

struct list{
	int data;
	struct list * next;
};

typedef struct list node;

int main(){
	
	node *first = (node*)malloc(sizeof(node));
	node *second = (node*)malloc(sizeof(node));
	node *third = (node*)malloc(sizeof(node));
	
	first->next= second;
	second->next= third;
	third->next=NULL;
	
	first->data=10;
	second->data=11;
	third->data=12;
	
	printf("Before deletion\n");
	node*ptr=first;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	
	ptr=first;
	first=first->next;
	free(ptr);
	
	
	printf("\nAfter deletion\n");
	ptr=first;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	return 0;
	
}