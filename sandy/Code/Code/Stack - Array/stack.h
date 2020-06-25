#ifndef _Stack_H
#define _Stack_H

typedef int ET;
struct node;
typedef struct node *StackRecord;

StackRecord construct(int Max);
StackRecord dequeue(StackRecord S);
StackRecord enqueue(ET X, StackRecord S);
int isFull(StackRecord S);
int isEmpty(StackRecord S);
ET top(StackRecord S);
StackRecord makeEmpty(StackRecord S);


#endif














































































//Author : Eko Simanjuntak - 11415009
