#include "et.h"

#ifndef _Queue_h
#define _Queue_h

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Queue;

Queue createQueue(ET ID);
void enqueue(ET X, Queue Q);
ET dequeue(Queue Q);
int isEmpty(Queue Q);
void makeEmpty(Queue Q);
void disposeQueue(Queue Q);
void printElements(Queue Q);
ET getID(PtrToNode node);
ET front(Queue Q);

#endif
