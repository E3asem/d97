
#ifndef _QUEUE_HEADER_
#define _QUEUE_HEADER_


unsigned char queue_isFull(void);
unsigned char queue_isEmpty(void);
void queue_enqueue(int element);
void queue_dequeue(void);
void queue_display(void);

void QUEUE_APPLICATION(void);


#endif