#include<stdlib.h>
#include<stdio.h>

struct list{
	int data;
	struct list *next;
};

typedef struct list node;

int main(){
	node *first=(node*)malloc(sizeof(node));
	node *second=(node*)malloc(sizeof(node));
	node *third=(node*)malloc(sizeof(node));
	
	first->data=10;
	second->data=20;
	third->data=30;
	
	first->next=second;
	second->next=third;
	third->next=first;
	
	node *newnode=(node*)malloc(sizeof(node));
	newnode->data=5;
	
	node*ptr=first;
	while(ptr->next!=first){
		ptr=ptr->next;
	}
	ptr->next=newnode;
	newnode->next=first;
	first=newnode;
	
	ptr=first;  //naya pointer banayeni hunxa using node* nayapointer
	
	printf("%d",ptr->data);
	ptr=ptr->next;
	while(ptr!=first){
		printf("\t%d\t",ptr->data);
		ptr=ptr->next;
	}
	
}