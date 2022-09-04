#include <stdio.h>
#include <conio.h>
int stack[20], choice, n, top, x, i;
void push();
void pop();
void display();

int main(){

top = -1;
printf("\nEnter the size of the stack[max=20]");
scanf("%d",&n);
printf("n\t Stack operation using array");
printf("\nt.............");
printf("\n\t.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
do
{
	printf("\n Enter the choice: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:{
		push();
			break;	
		}
		
			case 2:{
		pop();
			break;	
		}
			case 3:{
		display();
			break;	
		}
			case 4:{
		printf("\n\t exit point");
			break;	
		}
		default:
			{
				printf("\n\t please enter a valid choice (1/2/3/4)");
				
			}
			
 
      	}
      	
}
while(choice!=4);
      return 0; 
  }
  void push(){
  	if(top>=n-1)
  	{
  		printf("\n\t stack overflow or stack is full");
  		
	  }
	  else{
	  	printf("enter the value to pushed or inserted:");
	  	scanf("%d",&x);
	  	top++;
	  	stack[top]=x;
	  	
	  }
  	
	  }
	  void pop(){
	  	if (top<=-1){
	  		printf("stack underflow or empty\n");
	  	
	  		
		  }
		  else{
		  	printf("the popped element is %d",stack[top]);
		  		top--;
		  }
	  }
	  void display(){
	  	if(top>=0){
	  		printf("\n the element is %stack\n");
	  		for (i=top; i>0;i--)
	  		printf("\n%d",stack[i]);
	  		printf("\nelements at top of the stack is %d",stack[top]);
	  		printf("\npress next choice");
	  		
		  }
		  else{
		  	printf("\n the stack is empty");
		  }
	  }
