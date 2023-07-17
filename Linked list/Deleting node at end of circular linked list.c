#include<stdio.h>
#include<stdlib.h>

struct list{
	int data;
	struct list * next;
};

typedef struct list node;

int main(){
	
	node * first=(node*)malloc(sizeof(node));
	node * second=(node*)malloc(sizeof(node));
	node * third=(node*)malloc(sizeof(node));
	
	first->next=second;
	second->next=third;
	third->next=first;
	
	first->data=10;
	second->data=20;
	third->data=30;
	
	node*ptr=first;
	node*temp=first->next;
	
	while(temp->next!=first){
		temp=temp->next;
		ptr=ptr->next;
	}
	ptr->next=first;
	free(temp);
	
	ptr=first;
	printf("%d\t",ptr->data);
	ptr=ptr->next;
	
	while(ptr!=first){
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
	
	
	
	
	
	
	return 0;
}