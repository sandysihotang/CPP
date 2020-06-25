typedef unsigned int ET;

#ifndef _Graph_H
#define _Graph_H

struct GraphADT;
typedef struct GraphADT *PtrToGraph;
typedef PtrToGraph Graph;

Graph Construct(Graph G, ET V);
ET getNumOfNodes(Graph G);
ET getNumOfEdges(Graph G);
Graph addEdge(Graph G, ET Start, ET End, ET Weight);
Graph removeEdge(Graph G, ET i, ET j);
ET getNumOfPredecessors(Graph G, ET Node, ET V);
int *Predecessors(Graph G, ET Node, ET V);
ET getNumOfSuccessors(Graph G, ET Node, ET V);
int *Successors(Graph G, ET Node, ET V);
void printAdjMatrix(Graph G);
void reverseAdjMatrix(Graph G);

#endif
