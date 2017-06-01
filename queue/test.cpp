#include <iostream>
#include <cstring>
#include "queue.h"

using namespace std;

int main(int args, char *argv[])
{
	Queue Q(100);
	cout<<Q.GetQueueSize()<<endl;
	cout<<Q.GetQueueCapacity()<<endl;
	QUEUENODE Node1;
	QUEUENODE Node2;
	strncpy(Node1.Text, "hello queue", MAXLEN);
	strncpy(Node2.Text, "go to new world", MAXLEN);
	Q.Enqueue(Node1);
	Q.Enqueue(Node2);
	Q.TraversalQueue();
	QUEUENODE *ptr1 = Q.Dequeue();
	Q.TraversalQueue();
	delete ptr1;
	QUEUENODE *ptr2 = Q.Dequeue();
	Q.TraversalQueue();
	delete ptr2;
	return 0;
}
