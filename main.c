#include <stdio.h>
#include <stdlib.h>

#define stack 0
#define queue 0

#if stack == 1
#include "stack.h"

int main (void)
{
	STACK_APPLICATION();

	return 0;
}

#elif queue == 1
#include "queue.h"
int main (void)
{
	QUEUE_APPLICATION();
	return 0;
}
#else 
	#warning "please select your code"
int main (void)
{
printf("hello");
	return 0;
}
#endif
