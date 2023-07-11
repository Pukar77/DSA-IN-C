#include<stdio.h>
#include<stdlib.h>

struct list{
	int data;
	struct list *next;
};

typedef struct list node;

int main(){
	int index;
	node * first=(node*)malloc(sizeof(node));
	node * second=(node*)malloc(sizeof(node));
	node * third=(node*)malloc(sizeof(node));
	
	first->next=second;
	second->next=third;
	third->next=NULL;
	
	first->data=10;
	second->data=20;
	third->data=30;
	printf("Before deletion \n");
	node*ptr=first;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	

	printf("\nEnter the position to delete node\n");
	scanf("%d",&index);
	 ptr=first;
	node *p=first->next;
	int i=0;
	while(i!=index-1){
		ptr=ptr->next;
		p=p->next;
		i++;
	}
	ptr->next=p->next;
	free(p);
	
	
	ptr=first;
	printf("\nAfter deletion\n");
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	
	
	
}