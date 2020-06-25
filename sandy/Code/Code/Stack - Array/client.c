#include <stdio.h>
#include "stack.h"

int main(){
	StackRecord S;
	int i;
	int Max = 15;
	
	S = construct(Max);
	
	//Enqueue element 1-10
	for(i=1;i<=10;i++){
		S = enqueue(i,S);
	}
	
	printf("Top = %d\n",top(S));
	
	//Dequeue top 5 elements
	for(i=1;i<=5;i++){
		S = dequeue(S);
	}
	
	printf("Top = %d\n",top(S));
	
	return 0;
}





































































//Author : Eko Simanjuntak - 11415009
