#ifndef _Queue_H
#define _Queue_H

typedef int ET;
struct QueueRecord;
typedef struct QueueRecord *Queue;

Queue ConstructQueue(int Max);
void Enqueue(ET X, Queue Q);
ET Front(Queue Q);
void Dequeue(Queue Q);
void Dispose(Queue Q);
void MakeEmpty(Queue Q);
int IsEmpty(Queue Q);
int IsFull(Queue Q);

void PrintQueue(Queue Q);

#endif



































































































//Author : Eko Simanjuntak - 11415009
