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
	
	printf("Before Deletion\n");
	node*ptr=first;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("\nAfter deletion of last node\n");
	
	node * temp=first;
	node * ptr1=first->next;
	while(ptr1->next!=NULL){
		ptr1=ptr1->next;
		temp=temp->next;
	}
	free(ptr1);
	temp->next=NULL;
	
	//To print the element after deleting last node
	ptr=first;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	
	

	return 0;
	
}