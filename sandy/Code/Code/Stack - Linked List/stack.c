#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct Node{
	ET Element;
	PtrToNode Next;
};

Stack CreatStack()
{
	Stack S = malloc(sizeof(struct Node));
	if(S==NULL) printf("Overload\n");
	S->Next = NULL;
	return S;
}

void Push(ET X, Stack S)
{
	PtrToNode tmp = malloc(sizeof(struct Node));
	if(tmp==NULL) printf("Overload\n");
	else
	{
		tmp->Element = X;
		tmp->Next = S->Next;
		S->Next = tmp;
	}
}

ET Top(Stack S)
{
	if(!IsEmpty(S)) return S->Next->Element;
	else printf("Stack is empty\n");
	return 0;
}

int IsEmpty(Stack S)
{
	return S->Next == NULL;
}









































































//Author : Eko Simanjuntak - 11415009
