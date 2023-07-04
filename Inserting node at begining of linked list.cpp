
#include <stdio.h>
#include<stdlib.h>

struct list{
    int data;
    struct list *next;  
};

typedef struct list node;



int main() {

node * first= (node*)malloc(sizeof(node));
node * second= (node*)malloc(sizeof(node));
node * third= (node*)malloc(sizeof(node));

first->next= second;
second->next= third;
third->next= NULL;

first->data=20;
second->data=30;
third->data=40;

node * fourth= (node*)malloc(sizeof(node));  //created a new node to insert

fourth->next=first;

first=fourth;

fourth->data=50;

node * ptr=first;

while(ptr!=NULL){
	printf("%d\t",ptr->data);
	ptr=ptr->next;
}


    return 0;
}
