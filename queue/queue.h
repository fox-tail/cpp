#ifndef __QUEUE_ZHOU__
#define __QUEUE_ZHOU__

#include <iostream>
#define MAXLEN 1024

typedef struct QueueNode{
	char Text[MAXLEN];
	struct QueueNode *Next;
}QUEUENODE;

class Queue
{
    private:
        int Size;
        int Capacity;
		QUEUENODE *Head;
		QUEUENODE *Tail;
       
    public:
		Queue();
		Queue(int Capacity);
		int GetQueueSize();
		int GetQueueCapacity();
		void TraversalQueue();
		int Enqueue(QUEUENODE Node);
		QUEUENODE *Dequeue();
};

#endif
