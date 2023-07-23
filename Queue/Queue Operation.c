#include<stdio.h>
#include<stdlib.h>
#define size 4

int rear=-1;
int front=0;

int item[size]; 

void enqueue();
void dequeue();
void display();

int main(){
	int choice;
	do{
		printf("Enter 1 to enqueue\n Enter 2 to dequeue\n Enter 3 to display\n");
		scanf("%d",&choice);
		
		switch(choice){
		case 1:
			enqueue();
			break;
			case 2:
				dequeue();
				break;
				case 3:
					display();
					break;
					case 4:
						exit(0) ;
					default:
						printf("Invalid input\n");
						break;
		}
	}while(choice!=4);
	
	return 0;	
}


             void enqueue(){
             	int x;
              if(rear==size-1){
              	printf("Queue is full\n");
			  }	
			  else{
			  	printf("Enter the element to be enqueued\n");
			  	scanf("%d",&x);
			  }
			  item[++rear]=x;
             }
             
             void dequeue(){
             	if(front>rear){
             		printf("Queue is empty\n");
				 }
				 else{
				 	printf("%d has been dequeued\n",item[front++]);
				 }
			 }
			 
			 void display(){
			 	int i;
			 	if(front>rear){
			 		printf("Queue is empty\n");
				 }
				 else{
				 	for(i=front;i<=rear;i++){
				 		printf("%d\t\n",item[i]);
					 }
				 }
			 }