#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
	List L = NULL;
	Position P = NULL;
	
	L = Construct(L);
	P = Header(L);
	
	Insert(77,L,P);
	PrintList(L);
	
	P = Advance(P);
	Insert(23,L,P);
	PrintList(L);
	
	P = Advance(P);
	Insert(1,L,P);
	PrintList(L);
	
	P = Advance(P);
	Insert(37,L,P);
	PrintList(L);
	
	P = Advance(P);
	Insert(45,L,P);
	PrintList(L);
	
	
	if((P = Find(1,L)) != NULL)
	{
		printf("\nPencarian berhasil, Nilai %d ditemukan \n", Retrieve(P));
		Update(500,P);
		printf("Elemen dengan nilai 1 telah diupdate menjadi 500\n");
		PrintList(L);
	}
	else printf("Element 1 tidak ditemukan\n");
	
	
	Delete(23,L); printf("\nDelete elemen dengan nilai 500\n"); PrintList(L);
	
//	SortList(L); printf("Sorted list : "); PrintList(L);
	
	DeleteList(L); PrintList(L);

//	free(P); 

	free(L);
	return 0;
}
















































//Author : Eko Simanjuntak - 11415009
