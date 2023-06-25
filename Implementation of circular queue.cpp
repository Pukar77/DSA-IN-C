#include<stdio.h>
#include<stdlib.h>

#define maxsize 4

struct queue {
    int item[maxsize];
    int front;
    int rear;
};

typedef struct queue queuetype;

void enqueue(queuetype *q);
void dequeue(queuetype *q);
void display(queuetype *q);

int main() {
    queuetype q;
    q.front = maxsize - 1;
    q.rear = maxsize - 1;
    int choice;
    
    do {
        printf("Enter 1 to enqueue\n");
        printf("Enter 2 to dequeue\n");
        printf("Enter 3 to display\n");
        printf("Enter 4 to exit\n");
        scanf("%d", &choice);
        
        switch (choice) {
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
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 4);
    
    return 0;
}

void enqueue(queuetype *q) {
    int data;
    printf("Enter the value to be inserted: ");
    scanf("%d", &data);
    
    if ((q->rear + 1) % maxsize == q->front) {
        printf("Queue is full\n");
    } else {
        q->rear = (q->rear + 1) % maxsize;
        q->item[q->rear] = data;
        printf("%d has been inserted successfully\n", data);
    }
}

void dequeue(queuetype *q) {
    if (q->front == q->rear) {
        printf("Queue is empty\n");
    } else {
        q->front = (q->front + 1) % maxsize;
        printf("%d has been deleted\n", q->item[q->front]);
    }
}

void display(queuetype *q) {
    if (q->front == q->rear) {
        printf("Queue is empty\n");
    } else {
        int i = (q->front + 1) % maxsize;
        while (i != (q->rear + 1) % maxsize) {
            printf("%d\t", q->item[i]);
            i = (i + 1) % maxsize;
        }
        printf("\n");
    }
}
