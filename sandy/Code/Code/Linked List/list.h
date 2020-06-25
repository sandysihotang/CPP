typedef int ET;

#ifndef _List_H
#define _List_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List Construct(List L);
Position Header(List L);
Position Advance(Position P);
ET Retrieve(Position P);
int IsLast(Position P, List L);
void Insert(ET X, List L, Position P);
void PrintList(List L);

Position Find(ET X, List L);
void Update(ET X, List L);
Position FindPrevious(ET X, List L);
void Delete(ET X, List L);
void DeleteList(List L);
void SortList(List L);

#endif




















































































//Author : Eko Simanjuntak - 11415009
