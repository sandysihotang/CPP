/*
	UTS Probstat
	Nama  : Eko Simanjuntak
	NIM   : 11415009
	Kelas : 41TI
*/

#include <stdio.h>
#include "queue.h"

int main()
{
	Queue Q;
	int i;
	static int max = 20;
	
	Q = CreatQueue(max);
	
	for(i=0;i<20;i++) if(i%2==0) Enqueue(i,Q);
	
	Preemptive(777,Q);
	
	PrintQueue(Q);
	
	Dispose(Q);
	
	return 0;
}
