#include "queue.h"

using namespace std;

Queue::Queue()
{
	Size = 0;
	Capacity = 1024;
	Head = NULL;
	Tail = NULL;
}
	
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

int Queue::Enqueue(QUEUENODE Node)
{
	QUEUENODE *Obj = new QUEUENODE;
	if(!Obj) return -1;
	
	*Obj = Node;
	Obj->Next = NULL;
 
	if((!Head)||(!Tail)){
		Head = Obj;
		Tail = Obj;
		return 0;	
	}
	
	Tail->Next = Obj;
	Tail = Obj;
	return 0;
}

QUEUENODE *Queue::Dequeue()
{
	if((!Head)||(!Tail)) return NULL;
 
	QUEUENODE *ptr = Head;
	Head = Head->Next;
	if(!Head){
		Tail = Head;
	}
	return ptr;
}

void Queue::TraversalQueue()
{
	if((!Head)||(!Tail)){
		cout<<"Queue Not Exist"<<endl;
		return;
	}

	QUEUENODE *ptr = Head;
	int i = 0;
	while(ptr){
		cout<<"["<<i<<"]:"<<ptr->Text<<endl;
		ptr = ptr->Next;
		i++;
	}
}
