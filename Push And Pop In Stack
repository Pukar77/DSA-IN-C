
#include <stdio.h>
#include<stdlib.h>

#define size 4

int top=-1;
int arr[size];

void push();
void pop();
void display();


int main() {
    int choice;
    while(1){
    printf("Enter 1 to push\n");
    printf("Enter 2 to pop\n");
    printf("Enter 3 to display\n");
    printf("Enter 4 to exit\n");
    scanf("%d",&choice);
    
	
    switch(choice){
        case 1:
            push();
        break;
        case 2:
            pop();
        break;
        case 3:
            display();
        break;
        case 4:
        	printf("Exiting\n");
            exit(1);
        break;
        default:
        printf("Invalid Input\n");
    }
    
    
}
}

void push(){
    int x;
    if(top==size-1){
        printf("Stack overflow\n");
    }
    else{
        printf("Enter the element to be added in the stack\n");
        scanf("%d",&x);
        top=top+1;
        arr[top]=x;
    }
}
void pop(){
	if(top==-1){
		printf("Stack underflow\n");
	}
	else{
		printf("%d has been poped\n", arr[top]);
		top=top-1;
	}
}
void display(){
	if(top==-1){
		printf("Stack underflow\n");
	}
	else{
		for(int i=top;i>=0;--i){
			printf("%d\t\n",arr[i]);
		}
	}
}


    


