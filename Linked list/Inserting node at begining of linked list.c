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
	
	printf("Before Insertion\n");
	node*ptr=first;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	
	node *newnode=(node*)malloc(sizeof(node));
	newnode->data=9;
	newnode->next=first;
	first=newnode;
	
	ptr=first;
	printf("\nAfter insertion\n");
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	

	return 0;
	
}