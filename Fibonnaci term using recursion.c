#include<stdio.h>
#include<conio.h>

int fib(int n);


int main(){
	int n;
	
	printf("Enter the term of which you want fibonnaci number\n");
	scanf("%d",&n);
	printf("Fibonnaci number is %d", fib(n));
	
}
int fib(int n){
	if(n==0){
		return 0;
	}
		else if(n==1){
			return 1;
		}
	else{
		return fib(n-1)+fib(n-2);
	}
}
