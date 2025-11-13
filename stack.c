#include <stdio.h>
#include <stdlib.h>


#include "stack.h"


#define MAX 5

int stack[MAX]; 
int top=-1;


void STACK_APPLICATION (void)
{

printf("full = %d\n ",stack_isFull());
printf("empty = %d\n ",stack_isEmpty());
stack_push(1);
printf("full = %d\n ",stack_isFull());
printf("empty = %d\n ",stack_isEmpty());
stack_display();
stack_push(2);
stack_push(3);
stack_push(4);
stack_push(5);
printf("full = %d\n ",stack_isFull());
printf("empty = %d\n ",stack_isEmpty());
stack_display();
stack_push(6);
stack_display();
stack_pop();
	printf("full = %d\n ",stack_isFull());
printf("empty = %d\n ",stack_isEmpty());
stack_display();
stack_pop();
stack_push(22);

	printf("full = %d\n ",stack_isFull());
printf("empty = %d\n ",stack_isEmpty());
stack_display();
stack_pop();
	printf("full = %d\n ",stack_isFull());
printf("empty = %d\n ",stack_isEmpty());

stack_pop();
	printf("full = %d\n ",stack_isFull());
printf("empty = %d\n ",stack_isEmpty());

stack_pop();
	printf("full = %d\n ",stack_isFull());
printf("empty = %d\n ",stack_isEmpty());

stack_pop();
	printf("full = %d\n ",stack_isFull());
printf("empty = %d\n ",stack_isEmpty());

stack_pop();
	printf("full = %d\n ",stack_isFull());
printf("empty = %d\n ",stack_isEmpty());
stack_display();
stack_pop();
	printf("full = %d\n ",stack_isFull());
printf("empty = %d\n ",stack_isEmpty());

}

unsigned char stack_isFull(void)
{
	if(top == MAX-1)
		return 1; // full
	else
		return 0; // not full
}
unsigned char stack_isEmpty(void)
{
	if(top == -1)
		return 1; // empty
	else
		return 0; // not empty
}
void stack_push(int element)
{
	if(stack_isFull() == 0)
		stack[++top]=element;	
	else
		printf("\n\n****STACK OverFLOW****\n\n");
}
void stack_pop(void)
{
	if(stack_isEmpty() == 0)
		printf("\npoped element %d \n",stack[top--]);
	else
		printf("\n\n****STACK UnderFLOW****\n\n");
}
void stack_display(void)
{ int i=0;
	if(stack_isEmpty() == 0)
	{
		for(i=top ; i >=0  ;i--)
			printf("%d",stack[i]);
		printf("\n\n");
	}
	else
		printf("\n\n****STACK UnderFLOW****\n\n");
}