#include <stdlib.h>
#include <stdio.h>
#define size 4

int front = 0;
int rear = -1;
int iteam[size];

void enqueue();
void dequeue();
void display();

int main() {
    int choice;

    do {
        printf("Enter 1 to enqueue\n");
        printf("Enter 2 to dequeue\n");
        printf("Enter 3 to display\n");
        printf("Enter 4 to exit\n");
        scanf("%d", &choice);

        switch (choice) {
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
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

void enqueue() {
    int value;

    if (rear == size - 1) {
        printf("Queue overflow\n");
    } else {
        printf("Enter the element to be added\n");
        scanf("%d", &value);
        iteam[++rear] = value;
        printf("%d has been enqueued\n", value);
    }
}

void dequeue() {
    int value;

    if (front > rear) {
        printf("Stack underflow\n");
    } else {
        printf("%d has been dequeued\n", iteam[front++]);
        
    }
}

void display() {
    int i;

    if (front > rear) {
        printf("Stack overflow\n");
    } else {
        for (i = front; i <= rear; i++) {
            printf("%d\t", iteam[i]);
        }
        printf("\n");
    }
}