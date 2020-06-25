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

/*
	added for UTS
*/
void PrintStack(Stack S);
int Pop(Stack S);
void Reverse(Stack S);
int size(Stack S);
Stack FindLast(Stack S);
void MakeEmpty(Stack S);
void DisposeStack(Stack S);

#endif

