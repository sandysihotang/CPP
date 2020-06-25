#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct Node{
	ET Element;
	Position Next;
};

List Construct(List L)
{
	L = malloc(sizeof(struct Node));
	if(L==NULL) printf("Overload\n");
	L->Next = NULL;
	return L;
}

Position Header(List L)
{
	return L;
}

void Insert(ET X, List L, Position P)
{
	Position temp = NULL;
	temp = malloc(sizeof(struct Node));
	if(temp==NULL) printf("Overload\n");
	temp->Element = X;
	temp->Next = P->Next;
	P->Next = temp;
}

Position Advance(Position P)
{
	return P->Next;
}

ET Retrieve(Position P)
{
	return P->Element;
}

int IsLast(Position P, List L)
{
	return P->Next == NULL;
}

void PrintList(List L)
{
	Position P = Header(L);
	while(P->Next != NULL)
	{
		P = Advance(P);
		printf("%d ",Retrieve(P));
	}
	printf("\n");
}

Position Find(ET X, List L)
{
	Position P =  NULL;
	P = L->Next;
	while(P!=NULL && P->Element != X)
		P = P->Next;
	return P;
}

Position FindPrevious(ET X, List L)
{
	Position P = NULL;
	P = L;
	while(P->Next != NULL && P->Next->Element != X)
		P = P->Next;
	return P;
}

void Update(ET X, Position P)
{
	P->Element = X;
}

void Delete(ET X, List L)
{
	Position P = NULL, temp = NULL;
	
	P = FindPrevious(X,L);
	if(!IsLast(P,L))
	{
		temp = P->Next;
		P->Next = temp->Next;
		free(temp);
	}
}

void DeleteList(List L)
{
	Position P, temp;
	P = L->Next;
	L->Next = NULL;
	while(P != NULL)
	{
		temp = P->Next;
		free(P);
		P = temp;
	}
}

void SortList(List L){
	Position P1,P2;
	ET temp;
	
	for(P1=L->Next ; P1->Next!=NULL ; P1=P1->Next){
		for(P2=P1->Next ; P2!=NULL ; P2=P2->Next){
			if(P1->Element > P2->Element){
				temp = P1->Element;
				P1->Element = P2->Element;
				P2->Element = temp;
			}
		}
	}	
}
























































//Author : Eko Simanjuntak - 11415009
