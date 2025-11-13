
#include <stdio.h>
#include <stdlib.h>


#include "queue.h"

#define max 8

int queue[max]; 
int front=-1,rear=-1;





unsigned char queue_isFull(void)
{
	if(rear == max-1)
		return 1;  // full
	else
		return 0;  // not full
}
unsigned char queue_isEmpty(void)
{
	if(front == -1 || front>rear)
		return 1;  // empty
	else
		return 0;  // not empty
}
void queue_enqueue(int element)
{
if(!queue_isFull())
{
	if(front == -1)
		front++;
	
	rear++;
	queue[rear]=element;
}
	else
	{
		printf("****Queue is ful****\n");
	}
}
void queue_dequeue(void)
{
	if(!queue_isEmpty()) // not empty
	{
		printf("dequeued element = %d \n",queue[front++]);
	}
	else
	{
		printf("****Queue is empty****\n");
	}
}
void queue_display(void)
{
	int i=0;
	if(!queue_isEmpty()) // not empty
	{
	for(i=front ; i<=rear; i++)
			printf("QUEUE = %d \t",queue[i]);
		printf("\n");
	}
		else
	{
		printf("****Queue is empty****\n");
	}
}


void QUEUE_APPLICATION(void)
{
	

 unsigned char choice=0;
 int element=0;
 while(1){
printf("\
Enter your Choice \n\
1-IS FULL? \n\
2-IS EMPTY?\n\
3-ENQUEUE\n\
4-DE-QUEUE\n\
5-Display\n\
0-EXIT\n");
scanf("%d",&choice);
switch(choice)
{
	case 1: 
	if(queue_isFull()) printf("YES\n");
	else printf("NO\n");
	break;
	case 2: 
	if(queue_isEmpty()) printf("YES\n");
	else printf("NO\n");
	break;
	case 3: 
	printf("please enter your element: ");
	scanf("%d",&element);
	queue_enqueue(element);
	///printf("your element is added\n");
	break;
	case 4: 
	queue_dequeue();
	///printf("your element is deleted\n");
	break;
	case 5: 
	queue_display();
	break;	
	case 0: 
		printf(" \n******GOOD BYE *******\n ");
///exit(0);
return;
	
	default: printf(" please enter a valid choice"); break;
}
 }
}