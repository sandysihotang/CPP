#include <stdio.h>
#include "queue.h"

int main()
{
	Queue Q;
	static int max = 5;
	
	Q = ConstructQueue(max);
	
	Enqueue(11,Q);
	Enqueue(17,Q);
	Enqueue(21,Q);
	Enqueue(27,Q);
	Enqueue(31,Q);
	
	PrintQueue(Q);
	
	printf("Front = %d\n",Front(Q));
	
	Dequeue(Q);
	Enqueue(37,Q);
	printf("Front = %d\n",Front(Q));
	
	MakeEmpty(Q);
	printf("Fornt = %d\n",Front(Q));
	
	Dispose(Q);
	
	return 0;
}





























































//Author : Eko Simanjuntak - 11415009
