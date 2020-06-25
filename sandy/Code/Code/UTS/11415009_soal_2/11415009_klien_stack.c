/*
	UTS Probstat
	Nama  : Eko Simanjuntak
	NIM   : 11415009
	Kelas : 41TI
*/

#include <stdio.h>
#include "stack.h"

void printMenu()
{
	printf("Silahkan masukkan pilihan Anda:\n");
	printf("\t1. Insert Element\n");
	printf("\t2. Delete Element\n");
	printf("\t3. Print Element\n");
	printf("\t4. Reverse Linked List Element\n");
	printf("\t5. Exit\n");	
}

int main()
{
	Stack S;
	int a,b;
	
	S = CreatStack();
	
	printf("\n");
	printMenu();
	printf("Masukkan pilihan ... ");
	scanf("%d",&a);
	
	while(a!=5)
	{
		if(a==1)
		{
			printf("Input data : "); scanf("%d",&b);
			Push(b,S);
			printf("\nData %d berhasil di insert kedalam stack.\n\n",b);
		}
		else if(a==2)
		{
			b = Pop(S);
			if(b!=0) printf("\nData pada puncak yakni %d berhasil di hapus.\n\n",b);
		}
		else if(a==3)
		{
			printf("\nData didalam stack adalah ");
			PrintStack(S);
			printf("\n");
		}
		else if(a==4)
		{
			printf("\n");
			Reverse(S);
			printf("\n");
		}
		
		printMenu();
		printf("Masukkan pilihan ... ");
		scanf("%d",&a);
	}
	
	printf("\nProgram akan keluar . . .\n");
	
	DisposeStack(S);
	
	return 0;
}
