/*
	Author 	: Eko Simanjuntak
	NIM		: 11415099
	Class	: 41TI
*/

#include <stdio.h>
#include "graph.h"

int main()
{
	Node node;
	ET i;
	
	Graph G = constructGraph(7);
	int V = getNumOfNodes(G);
	printf("Number of Nodes in Graph : %u\n",V);
	
	for(i=0;i<=6;++i)
		G = addNode(G,i);
		
	node = searchNode(G,1);
	
	printf("Node is found, id = %d\n", getNodeID(node));
	
	G = addEdge(G,0,1,2);
	G = addEdge(G,0,2,3);
	G = addEdge(G,1,3,2);
	G = addEdge(G,1,4,4);
	G = addEdge(G,2,1,4);
	G = addEdge(G,2,4,3);
	G = addEdge(G,2,6,1);
	G = addEdge(G,3,4,4);
	G = addEdge(G,4,5,2);
	G = addEdge(G,5,2,1);
	G = addEdge(G,6,5,5);
	G = addEdge(G,6,0,5);
	printf("\n");
	destroyGraph(G);
	
	return 0;
}
