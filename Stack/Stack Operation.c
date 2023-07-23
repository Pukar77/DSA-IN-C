#include <stdio.h>
#define size 4

int top=-1;
int arr[size];

void push();
void pop();
void display();

int main(){
	int choice;
	do{
	
	printf("Enter 1 to push\n Enter 2 to pop\n Enter 3 to display\n");
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
	}
}while(choice!=0);


	return 0;
	}
	
	
	void push(){
		int x;
		if(top==size-1){
			printf("Stack overflow\n");
		}
		else{
			printf("Enter the element to be added\n");
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
				printf("%d has been poped\n",arr[top]);
				top=top-1;
			}
	}
	
	void display(){
			int i;
				if(top==-1){
					printf("Stack underflow\n");
				}
				else{
					for(i=top;i>=0;--i){
						printf("%d\t\n",arr[i]);
					}
				}
	}
	


