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
	
	node * ptr=first;
	node * temp=first;
	
	while(ptr->next!=first){
		ptr=ptr->next;
	}
	
	first=first->next;
	ptr->next=first;
	free(temp);            //ptr chai free garyo bhane naya pointer banauna parxa ptr1 bhanera to traverse
	
	ptr=first;
	
	printf("%d\t",ptr->data);
	ptr=ptr->next;
	
	while(ptr!=first){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	
	return 0;
	
	
}