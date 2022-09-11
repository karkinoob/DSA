#include <stdio.h>
#include <conio.h>
int queue[20], choice, n, rear, front, item, i;
void enqueue();
void dequeue();
void display();

int main()
{

front = -1;
rear = -1;
printf("\n Enter the size of  Queue[max=20]:");
scanf("%d",&n);
printf("\n\t Queue operation using array");
printf("\n\t.............");
printf("\n\t.ENQUEUE\n\t 2.DEQUEUE\n\t 3.DISPLAY\n\t 4.EXIT");
do
   {
	printf("\n Enter the choice: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
		{
		enqueue();
			break;	
		}
		
			case 2:
			{
		dequeue();
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
  void enqueue()
  {
  	if(rear < n -1)
 	{

	  	printf("enter the data item to be inserted \n");
	  	scanf("%d",&item);
	  	if (front== -1)
	  	{
		   front=0;
		   rear=0;
	  }
  		else 
  		{
		   rear= rear +1;
		  }
		  queue[rear] = item;
	  }
	  else
	      printf(" Queue is full or queue overflow \n");
	  }
	  void dequeue()
	  {
	  	if (front != -1)
	  	{
		    item=queue[front];
		    if (front==rear)
		    {
		    	front=-1;
		    	rear=-1;
			}
		  else
		       front = front +1;
		printf("Deleted data item is %d \n",item);
}
      else
		  	printf("Queue is empty or queue underflow \n");
			  
		  	
		  
	  }
	  void display()
	  {
	  	if(front!= -1){
	  		printf("\n the element is %queue\n");
	  		for (i=rear; i >= front; i--)
	  		printf("\n%d",queue[i]);
	  		printf("\nelements at front of the queue is %d\n",queue[front]);
	  		printf("\npress next choice");
	  		
		  }
		  else{
		  	printf("\n the queue is empty\n");
		  }
	  }
