#include <iostream>
#include "queue.h"

using namespace std;

class Queue
{
    private:
        int Size;
        int Capacity;
		QUEUENODE *Head;
		QUEUENODE *Tail;
       
    public:
		Queue()
		{
    		Size = 0;
    		Capacity = 1024;
			Head = NULL;
			Tail = NULL;
		}
		Queue(int Capacity);
		int GetQueueSize();
		int GetQueueCapacity();
};

Queue::Queue(int Capacity)
{
	this->Capacity = Capacity;
	this->Size = 0;
	this->Head = NULL;
	this->Tail = NULL;
}

int Queue::GetQueueSize()
{
	return Size;
}

int Queue::GetQueueCapacity()
{
	return Capacity;
}

int Queue::Enqueue(QUEUENODE node)
{
	return 0;
}

int Queue::Dequeue(QUEUENODE *node)
{
	return 0;
}

int main(int args, char *argv[])
{
	Queue Q(100);
	cout<<Q.GetQueueSize()<<endl;
	cout<<Q.GetQueueCapacity()<<endl;
	return 0;
}
