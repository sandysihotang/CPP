typedef unsigned int ET;

#ifndef _Graph_H
#define _Graph_H

struct GraphNode;
typedef struct GraphNode *PtrToGraphNode;
typedef PtrToGraphNode Edge;
typedef PtrToGraphNode Node;

struct GraphADT;
typedef struct GraphADT *PtrToGraph;
typedef PtrToGraph Graph;

Graph Construct(ET V);
ET getNumOfNodes(Graph G);
Graph addNode(Graph G, ET X);
Node searchNode(Graph G, ET X);
ET getNodeID(Node node);
Graph addEdge(Graph G, ET Start, ET End, ET Weight);
int *getNeighbours(Graph G, ET ID);

#endif
