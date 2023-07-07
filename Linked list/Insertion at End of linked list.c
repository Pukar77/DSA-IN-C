#include<stdio.h>
#include<stdlib.h>


struct list{
	int data;
	struct list *next;
};

typedef struct list node;

int main(){
	
	node * first= (node*)malloc(sizeof(node));
	node * second= (node*)malloc(sizeof(node));
	node * third= (node*)malloc(sizeof(node));
	
	first->next= second;
	second->next= third;
	third->next= NULL;
	
	first->data= 11;
	second->data=12;
	third->data=13;
	
	
	node *p=first;  //created a new pointer variable
	printf("Before insertion\n");
while(p!=NULL){
printf("%d\t",p->data);
p=p->next;
}
	
	
	
	node *newnode= (node*)malloc(sizeof(node));  //created a new node to insert
	newnode->data=14;
	node * ptr= first;    //to track upto last element
	
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	
	ptr->next= newnode;
	newnode->next= NULL;
	
p=first;    //first ko data aayo bhane sabai data accesible hunxa so p=first 
printf("\nAfter Insertion\n");
while(p!=NULL){
printf("%d\t",p->data);
p=p->next;
}
	
	
	
	
	
	
	
	return 0;
}