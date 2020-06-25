#ifndef _Stack_H
#define _Stack_H

typedef int ET;
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

Stack CreatStack();
void Push(ET X, Stack S);
ET Top(Stack S);
int IsEmpty(Stack S);

#endif













































































































//Author : Eko Simanjuntak - 11415009
