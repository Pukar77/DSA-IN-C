#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#define size 4

struct queue{
	int front;
	int rear;
	int iteam[size];
};

typedef struct queue queuetype;
	void enqueue(queuetype *);
	void dequeue(queuetype *);
	void display(queuetype *);


int main(){
	queuetype q;
    q.front=0;
	q.rear=-1;
	int choice;

		do{
	printf("Enter 1 to enqueue\n");
	printf("Enter 2 to dequeue\n");
	printf("Enter 3 to display\n");
	printf("Enter 4 to exit\n");
	scanf("%d",&choice);

	switch(choice){
		case 1:
			enqueue(&q);
			break;
			case 2:
				dequeue(&q);
				break;
				case 3:
					display(&q);
					break;
					case 4:
						break;
						default:
							printf("Invalid input\n");
							break;
			
	}
}
while(choice!=4);

return 0;
}


void enqueue(queuetype *q){
	int value;
	if(q->rear==size-1){
		printf("Queue overflow\n");
	}
	else{
		printf("Enter the element to be added\n");
		scanf("%d",&value);
		q->iteam[++q->rear]=value;
		printf("%d has been enqueued\n",value);
	}
}
void dequeue(queuetype *q){
	int value;
	if(q->front>q->rear){
		printf("Stack underflow\n");
	}
	else{
		printf("%d has been dequeued \n", q->iteam[q->front++]);
	}
}
void display(queuetype *q){
	int i;
    if(q->front > q->rear){
    	printf("Stack overflow\n");
	}
	else{
		for(i=q->front; i<=q->rear; i++){
			printf("%d\t", q->iteam[i]);
		}
		printf("\n");
	}
}