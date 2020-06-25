/*
	Author 	: Eko Simanjuntak
	NIM		: 11415099
	Class	: 41TI
*/

#include <stdio.h>
#include "graph.h"

int main()
{
	ET i;
	
	Graph G = constructGraph(7);
	int V = getNumOfNodes(G);
	printf("Number of Nodes in Graph : %u\n",V);
	
	for(i=1;i<=7;++i)
		G = addNode(G,i);
	
	G = addEdge(G,1,2,0);
	G = addEdge(G,1,3,0);
	G = addEdge(G,1,4,0);
	G = addEdge(G,2,4,0);
	G = addEdge(G,2,5,0);
	G = addEdge(G,3,6,0);
	G = addEdge(G,4,3,0);
	G = addEdge(G,4,6,0);
	G = addEdge(G,4,7,0);
	G = addEdge(G,5,4,0);
	G = addEdge(G,5,7,0);
	G = addEdge(G,7,6,0);

	printf("\n\nDFS_EX Traversal:\n\n");
	DFS_EX(G,3);
	printf("\n\n");
	destroyGraph(G);
	
	return 0;
}
