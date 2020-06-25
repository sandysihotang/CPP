typedef int ET;

#ifndef _Queue_H
#define _Queue_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Queue;
typedef PtrToNode Position;

Queue Construct(void);
Position Header(Queue Q);
Position Tail(Queue Q);
Position Enqueue(ET X, Position H);
void Dequeue(Queue Q);
ET Front(Queue Q);
ET Retrieve(Position P);
int IsLast(Position P, Queue Q);
Position Advance(Position P);
void PrintQueue(Queue Q);

#endif
















































//Author : Eko Simanjuntak - 11415009
