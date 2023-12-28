#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include <stdbool.h>


#define MAX_NAMES 15
#define MAX_NAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20
int amount;
struct node {
  char name[20];
  char name1[20];
  char slocation[20];
  char flocation[20];
  int number;
    struct node *next;
};

typedef struct node node;

node *head = NULL;
node *newnode = (node*)malloc(sizeof(node));



void maskPasswordInput(char *password) {
    char ch;
    int i = 0;

    while (1) {
        ch = _getch();  // Get a character without echoing to the console

        if (ch == 13) {  // Check if Enter key is pressed
            break;
        }
        if (ch == 8 && i > 0) {  // Check if Backspace key is pressed
            printf("\b \b");  // Clear the last asterisk
            i--;
        } else if (i < MAX_PASSWORD_LENGTH - 1) {  // Leave space for null-terminator
            password[i] = ch;
            printf("*");
            i++;
        }
    }
    password[i] = '\0';  // Null-terminate the input
}




void check(){
	
	 char password[MAX_PASSWORD_LENGTH + 1] = "letsfly";  // Set the correct password
    char inputPassword[MAX_PASSWORD_LENGTH + 1];
    char ch;
    int i = 0;
    bool isPasswordCorrect = false;

    do {
        printf("Enter password: ");
        
        i = 0;
        while (1) {
            ch = _getch();  // Get a character without echoing to the console
            if (ch == 13) {  // Check if Enter key is pressed
                break;
            }
            if (ch == 8 && i > 0) {  // Check if Backspace key is pressed
                printf("\b \b");  // Clear the last asterisk
                i--;
            } else if (i < MAX_PASSWORD_LENGTH) {
                inputPassword[i] = ch;
                printf("*");
                i++;
            }
        }
        inputPassword[i] = '\0';  // Null-terminate the input

        if (strcmp(inputPassword, password) == 0) {
            isPasswordCorrect = true;
            break;
        } else {
            printf("\nInvalid password. Please try again.\n\n");
        }
    } while (true);

    printf("\nPassword accepted. Access granted.\n");
//	char pass[20];
//	chess:
//	printf("Enter the password\n");
//	scanf("%s",pass);
//	
//	if(strcmp(pass,"letsfly")==0){
//				printf("Welcome Back\n");
//}
//else{
//	printf("Invalid password\n");
//	goto chess;
//}




  char names[MAX_NAMES][MAX_NAME_LENGTH] = {
        "Pukar",
        "Bishesh",
        "Bison",
        "Nischal",
        "Abhinav",
        "Mandish",
        "Utsarga",
        "Attulya",
        "Amardeep",
        "Aakash",
        "Swarup",
        "Rajeeb",
        "Sharad",
        "Waiwab",
        "Susan",
				        
        
    };

    int numNames = sizeof(names) / sizeof(names[0]);

   

    // Bubble sort
    for (int i = 0; i < numNames - 1; i++) {
        for (int j = 0; j < numNames - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nNames of Attendant are:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }
	
}




void detail(){
	 time_t t;   
    time(&t);
 	printf("........................................................................................................................\n");
 	printf(":         					AIRPLANE TICKET 		\t\t\t\t\t\t\t\t\t\t\t:\n");
 	printf(": 				Note: PLEASE DO NOT LOSE THIS TICKET!!!!\t\t\t\t\t\t\t\t\t:\n");
 	printf(": Flight Attendant: %s %s \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t:\n",newnode->name, newnode->name1 );
 	printf(": Phone number: %d        \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t:\n",newnode->number);
 	printf(": Starting location: %s   \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t:\n", newnode->slocation);
 	printf(": Final location: %s      \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t:\n",newnode->flocation);	
if(amount==11000){
	printf(": Class : Normal Class    \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t:\n");
    	printf(": Boarding Time: 3:00 PM   \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t:\n "); 
	printf("........................................................................................................................\n");
}
else{
	printf(": Class : Business Class   \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t:\n");
	printf(": Boarding Time: 3:00 PM   \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t:\n "); 
	printf("........................................................................................................................\n");
}



    }
    

	
	
	
	
	
	


void add() {
   char n[20];
   char n1[20];
   int num;
   char sloc[20];
   char floc[20];
 
   
    
printf("Enter your first name\n");
scanf("%s",n);
strcpy(newnode->name,n);

printf("Enter your last name\n");
scanf("%s",n1);
strcpy(newnode->name1,n1);

printf("Enter your phone number\n");
scanf("%d",&num);
newnode->number=num;


printf("Enter your starting Destination\n");
scanf("%s",sloc);
strcpy(newnode->slocation,sloc);

printf("Enter your Final Destination\n");
scanf("%s",floc);
strcpy(newnode->flocation,floc);


   

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

void display(){
	int choice;
	
	int select;
	char pass[20];
	int confirm;
	int confirm1;
	next:
	printf("The following is the price list of Flight from %s to %s\n\n\n",newnode->slocation,newnode->flocation);
	printf("Business Class              Rs 20,000\n\n");
	printf("Normal Class                Rs 11,000\n\n");
	apple:
	printf("Enter 1 for bussiness class\nEnter 2 for normal class\n");
	scanf("%d",&select);
	switch(select){
		case 1:
			
			printf("Are you sure you want to book buisiness class flight?? Press 1 to confirm and 2 to cancel\n");
			scanf("%d",&confirm);    
			
			if(confirm!=1){
					system("cls");
				goto next;
			
			}                  
		
		break;
		case 2:
				
			printf("Are you sure you want to book Normal class flight?? Press 1 to confirm and 2 to cancel\n");
			scanf("%d",&confirm1);                      
	
		if(confirm1!=1){
				system("cls");
				goto next;
			}     
	                  
	}
	                  
	printf("Press 1 for E-sewa\n");
	printf("Press 2 for Khalti\n");
	printf("ENter 3 for Mobile Banking\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			second:
			printf("Enter your E-sewa password\n");
			 maskPasswordInput(pass);
			if(strcmp(pass,"pukar")==0){
				printf("Welcome Back\n");
				first:
				printf("Enter the amount of payment\n");
				scanf("%d",&amount);
			if(amount!=20000   && amount!=11000){
				printf("Invalid amount\n");
				goto first;
			}
			else{
				printf("Congratulation, Booking succesfull\n");
				printf("Press any key to continue");
			}
			}
			else{
				printf("Invalid password\n");
				goto second;
			}
			
			break;
			case 2:
				six:
			printf("Enter your Khalti password\n");
		 maskPasswordInput(pass);
			if(strcmp(pass,"pukar")==0){
				printf("Welcome Back\n");
				hello:
				printf("Enter the amount of payment\n");
				scanf("%d",&amount);
			if(amount!=20000 && amount!=11000){
				printf("Invalid amount\n");
				goto hello;
			}
			else{
				printf("Congratulation, Booking succesfull\n");
				printf("Press any key to continue");
			}
			}
			else{
				printf("Invalid password\n");
				goto six;
			}
			break;
			
			
			case 3:
				fifth:
			printf("Enter your E-Banking password\n");
			 maskPasswordInput(pass);
			if(strcmp(pass,"pukar")==0){
				printf("Welcome Back\n");
				hi:
				printf("Enter the amount of payment\n");
				scanf("%d",&amount);
			if(amount!=20000 && amount!=11000){
				printf("Invalid amount\n");
				goto hi;
			}
			else{
				printf("Congratulation, Booking succesfull\n");
				printf("Press any key to continue");
			}
			}
			else{
				printf("Invalid password\n");
				goto fifth;
			}
			
	}
	getch();
     
}

int main() {
	menu:
    printf("---Menus are---\n");
    printf("1.Press 1 for Flight Booking\n2.Press 2 for flight Detail\nPress 3 For admin mode(Only for staffs)\n");
    int choice;
    int c;
       printf("Enter your choice: ");\
    do {
        scanf("%d", &choice);
        switch (choice) {
            case 1:
   printf("Enter 1 For International Flight\nEnter 2 for Domestic flight\n");
   scanf("%d",&c);
     add();
     system("cls");
     display();
     system("cls");
     goto menu;
      break;   
	  case 2:
	detail(); 
	printf("Press any key to continue\n");
	getch();
	system("cls");
	goto menu;
	break;     
       
    
    case 3:
    	check();
    	}
    }while(choice!=3);
    getch();
return 0;
}