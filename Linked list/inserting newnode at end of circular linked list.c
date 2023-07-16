#include<stdio.h>
#include<stdlib.h>

struct list{
	int data;
	struct list *next;
};

typedef struct list node;

int main(){
	
	node* first=  (node*)malloc(sizeof(node));
	node* second= (node*)malloc(sizeof(node));
	node* third= (node*)malloc(sizeof(node));
	
	first->next=second;
	second->next=third;
	third->next=first;
	
	first->data=10;
	second->data=20;
	third->data=30;
	
	node *newnode=(node*)malloc(sizeof(node));
	newnode->data=40;
	
	node*ptr=first;
	while(ptr->next!=first){
		ptr=ptr->next;
	}
	ptr->next=newnode;
	newnode->next=first;
	
	ptr=first;
	printf("%d\t",ptr->data);
	ptr=ptr->next;
	while(ptr!=first){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	
	
	
	
}