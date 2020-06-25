#ifndef _Queue_H
#define _Queue_H

typedef int ET;
struct QueueRecord;
typedef struct QueueRecord *Queue;

Queue CreatQueue(int Max);
void Enqueue(ET X, Queue Q);
ET Front(Queue Q);
void Dequeue(Queue Q);
void Dispose(Queue Q);
void MakeEmpty(Queue Q);
int IsEmpty(Queue Q);
int IsFull(Queue Q);

/*
	add for UTS - PrintQueue() && Preemptive()
*/

void PrintQueue(Queue Q);
void Preemptive(ET X, Queue Q);
int QueueSize(Queue Q);
int print(ET X, Queue Q);

#endif
