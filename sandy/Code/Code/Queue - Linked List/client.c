#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
	Queue Q = NULL;
	Position H=NULL, T=NULL;
	
	Q = Construct();
	H = Header(Q);
	T = Tail(Q);
	
	T = Enqueue(1,T);
//	Advance (T);
	
	T = Enqueue(2,T);
//	Advance (T);
	
	T = Enqueue(3,T);
//	Advance (T);
	
	T = Enqueue(2,T);
//	Advance (T);
	
	T = Enqueue(5,T);
//	Advance (T);
	
	T = Enqueue(6,T);
//	Advance (T);
	
	PrintQueue(Q);
	
	printf("%d\n",Front(Q));
	
	Dequeue(Q);
	
	PrintQueue(Q);
	
	return 0;
}
