#include <stdio.h>
#include "stack.h"

int main()
{
	Stack S;
	int i;
	
	S = CreatStack();
	for(i=0;i<10;i++) Push(i,S);
	printf("The top value is %d\n",Top(S));
	
	return 0;
}






































































//Author : Eko Simanjuntak - 11415009
