#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct node {
    char name[25];
    int phone;
    char address[30];
    struct node *next;
};

typedef struct node node;

node *head = NULL;

void add() {
    char n[25];
    int phone1;
    node *newnode = (node*)malloc(sizeof(node));
    printf("Enter your name: ");
    scanf("%s",n); // Use %s to read a string
    
    printf("Enter your phone number\n");
    scanf("%d",&phone1);

    // Copy the name to the new node
    strcpy(newnode->name, n);
    newnode->phone=phone1;

    if (head == NULL) {
        newnode->next = NULL;
        head = newnode;
    } else {
        node *ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->next = NULL;
    }
}

int main() {
    printf("---Menus are---\n");
    printf("1. To add name\n");
    int choice;
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add();
                break;
        }
    } while (choice != 2);

    // Free allocated memory
    node *ptr = head;
    while (ptr != NULL) {
        node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }

    return 0;
}