#include<stdio.h>
#include<stdlib.h>

struct list{
	int data;
	struct list *next;
	struct list *prev;
};

typedef struct list node;

int main(){
	node *first= (node*)malloc(sizeof(node));
	node *second= (node*)malloc(sizeof(node));
	node *third= (node*)malloc(sizeof(node));
	
	first->data=10;
	second->data=20;
	third->data=30;
	
	first->next=second;
	second->next=third;
	third->next=NULL;
	first->prev=NULL;
	second->prev=first;
	third->prev=second;
	
	node *ptr=first;
	node *ptr1=first->next;
	
	while(ptr1->next!=NULL){
		ptr1=ptr1->next;
		ptr=ptr->next;
	}

ptr->next=NULL;
free(ptr1);

	ptr=first;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	
	
	
}