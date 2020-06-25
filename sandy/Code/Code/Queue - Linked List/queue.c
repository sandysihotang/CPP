#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct Node{
	ET Element;
	Position Next;
};

Queue Construct()
{
	Queue Q;
	
	Q = malloc(sizeof(struct Node));
	Q->Next = NULL;
	
	return Q;
}

Position Header(Queue Q)
{
	return Q;
}

Position Tail(Queue Q)
{
	return Q;
}

ET Retrieve(Position P){
	return P->Element;
}

int IsLast(Position P, Queue Q){
	return P->Next == NULL;
}

Position Advance(Position P){
	return P->Next;
}

ET Front(Queue Q)
{
	return Q->Next->Element;
}

Position Enqueue(ET X,Position T)
{
	Position temp = NULL;
	temp = malloc(sizeof(struct Node));
	temp->Element = X;
	temp->Next = T->Next;
	T->Next = temp;
	
	return temp;
}

void Dequeue(Queue Q)
{
	Position H, temp;
	H = Header(Q);
	
	temp = H->Next;
	H->Next = temp->Next;
	free(temp);
}

void PrintQueue(Queue Q)
{
	Position P = Header(Q);
	while(!IsLast(P,Q)){
		P = Advance(P);
		printf("%d ", Retrieve(P));
	}
	printf("\n");
}






































//Author : Eko Simanjuntak - 11415009
