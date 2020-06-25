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
	S->Element = 0;
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
		S->Element++;
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

void PrintStack(Stack S)
{
	PtrToNode temp;
	temp = S->Next ;
	while(temp->Next!=NULL)
	{
		printf("%d ",temp->Element);
		temp = temp->Next;
	}
	printf("%d\n",temp->Element);
}


int Pop(Stack S)
{
	int x;
	
	PtrToNode TempCell;
	if(!IsEmpty(S))
	{
		TempCell = S->Next;
		x = TempCell->Element;
		S->Next = TempCell->Next;
		free(TempCell);
		S->Element--;
		return x;
	}
	else
	{
		printf("\nStack kosong\n\n");
		return 0;
	}
}

void Reverse(Stack S)
{
	int len = size(S);
	int qwe[len],i=0;
	
	PtrToNode temp;
	temp = S->Next ;
	while(temp->Next!=NULL)
	{
		qwe[i] = temp->Element;
		temp = temp->Next;
		i++;
	}
	qwe[i] = temp->Element;
	
	MakeEmpty(S);
	
	for(i=0;i<len;i++)
	{
		Push(qwe[i],S);
	}
	
	for(i=0;i<len;i++)
	{
		printf("%d",qwe[i]);
		if(i!=len-1) printf(" ");
	}
	
	printf("\n  Reversed Linked List\n");
	
	PrintStack(S);
}

int size(Stack S)
{
	return S->Element;
}

void MakeEmpty(Stack S)
{
	if(S == NULL)
	{
		printf("Stack tidak ada\n");
		exit(0);
	}
	else
	{
		while(!IsEmpty(S))
			Pop(S);
	}
}

void DisposeStack(Stack S)
{
	MakeEmpty(S);
	free(S);
}
