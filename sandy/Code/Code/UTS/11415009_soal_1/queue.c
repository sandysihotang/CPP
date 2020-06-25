#include <stdio.h>
#include "fatal.h"
#include "queue.h"

struct QueueRecord{
	int Capacity;
	int Front;
	int Rear;
	int Size;
	ET *Array;
};

static int Succ(int value, Queue Q);

Queue CreatQueue(int Max)
{
	Queue Q = NULL;
	
	Q = malloc(sizeof(struct QueueRecord));
	if(Q==NULL) FatalError("Overload\n");
	
	Q->Array = malloc(sizeof(ET)*Max);
	if(Q==NULL) FatalError("Overload\n");
	
	Q->Capacity = Max;
	MakeEmpty(Q);
	return Q;
}

void Enqueue(ET X, Queue Q)
{
	if(IsFull(Q)) Error("Full Queue\n");
	else
	{
		Q->Size++;
		Q->Array[Q->Rear] = X;
		Q->Rear = Succ(Q->Rear,Q);
	}
}

ET Front(Queue Q)
{
	if(!IsEmpty(Q)) return Q->Array[Q->Front];
	Error("Empty Queue\n");
	return 0;
}

void Dequeue(Queue Q)
{
	if(!IsEmpty(Q)) Error("Empty Queue\n");
	else
	{
		Q->Size--;
		Q->Front = Succ(Q->Front,Q);
	}
}

void Dispose(Queue Q)
{
	if(Q!=NULL)
	{
		free(Q->Array);
		free(Q);
	}
}

static int Succ(int value, Queue Q)
{
	if(++value == Q->Capacity) value = 0;
	return value; 
}

void MakeEmpty(Queue Q)
{
	Q->Size = 0;
	Q->Front = 0;
	Q->Rear = 0;
}

int IsEmpty(Queue Q)
{
	return Q->Size == 0;
}

int IsFull(Queue Q)
{
	return Q->Size == Q->Capacity;
}

void PrintQueue(Queue Q)
{
	int i;
	
	for(i=0;i<Q->Size;i++)
	{
		printf("%d, ",Q->Array[i]);
	}
	printf("\n");
}

void Preemptive(ET X, Queue Q)
{
	int i;
	
	if(!IsFull(Q))
	{
		Q->Size++;
		
		for(i=Q->Size-1 ;i>=0 ;i--)
		{
			Q->Array[i] = Q->Array[i-1];
		}
	
		Q->Array[0] = X;
	}
}


