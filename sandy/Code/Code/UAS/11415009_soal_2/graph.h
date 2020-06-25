#include "elementtype.h"

#ifndef _Graph_h
#define _Graph_h

enum Chromatic{None, White, Gray, Black};
typedef enum Chromatic Colours;

struct GraphNode;
typedef struct GraphNode *PtrToGraphNode;
typedef PtrToGraphNode Node;

struct GraphEdge;
typedef struct GraphEdge *PtrToGraphEdge;
typedef PtrToGraphEdge Edge;

struct GraphADT;
typedef struct GraphADT *PtrToGraph;
typedef PtrToGraph Graph;

Graph constructGraph(ET V);
ET getNumOfNodes(Graph G);
Graph addNode(Graph G, ET X);
Node searchNode(Graph G, ET X);
ET getNodeID(Node node);
Graph removeNode(Graph G, ET ID);
Graph addEdge(Graph G, ET Start, ET End, int Weight);
Graph removeEdge(Graph G, ET Start, ET End);
ET countNeighbours(Node n);
Node *getSuccessors(Graph G, ET ID);
Node preparedTraverse(Graph G, ET Source);
void BFS(Graph G, ET S);
void destroyGraph(Graph G);

void DFS(Graph G);
void DFS_Visit(Graph G, Node u, ET *time);

void DFS_EX(Graph G, ET S);

#endif
