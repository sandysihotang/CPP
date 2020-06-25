#include <stdio.h>
#include <stdlib.h>
#include "et.h"
#include "queue.h"

struct Node{
	ET ID;
	PtrToNode Next;
};

Queue createQueue(ET ID)
{
	Queue Q = malloc(sizeof(struct Node));
	if(Q == NULL)
	{
		printf("Overload\n");
		exit(1);
	}
	Q->ID = ID;
	Q->Next = NULL;
	
	return Q;
}

void enqueue(ET X, Queue Q)
{
	PtrToNode node = malloc(sizeof(struct Node));
	node->ID = X;
	node->Next = NULL;
	
	PtrToNode temp = Q->Next;
	if(temp == NULL) Q->Next = node;
	else
	{
		while(temp->Next != NULL) temp = temp->Next;
		temp->Next = node;
	}
}

ET dequeue(Queue Q)
{
	PtrToNode temp = Q->Next;
	ET X = temp->ID;
	Q->Next = temp->Next;
	free(temp);
	return X;
}

int isEmpty(Queue Q)
{
	return Q->Next == NULL;
}

void makeEmpty(Queue Q)
{
	PtrToNode temp;
	while(Q->Next != NULL)
	{
		temp = Q->Next;
		Q->Next = temp->Next;
		free(temp);
	}
}

void disposeQueue(Queue Q)
{
	makeEmpty(Q);
	free(Q);
}

void printElements(Queue Q)
{
	PtrToNode temp;
	int i=0;
	
	temp = Q->Next;
	while(temp->Next != NULL)
	{
		printf("elemen ke-%d = %d\n",i,temp->ID);
		temp = temp->Next;
		i++;
	}
}

ET getID(PtrToNode node)
{
	return node->ID;
}

ET front(Queue Q)
{
	return Q->Next->ID;
}
