 //A program to Implement a graph of Adjacency List
#include <stdio.h>
#include <stdlib.h>

 struct AdjNode
{
	int dest;
	struct AdjNode *next;
}; //AdjNode;


typedef struct AdjList
{
	struct AdjNode *head; //pointer to head node of list
} AdjList;

//A structure to represent a graph, A graph is  an array of adjacency 
//lists. Size of array will be V (number of vertices in graph)
typedef struct graph 
{ 
	int V;
	AdjList *array;
}graph;

struct AdjNode* newAdjNode(int dest)
{
	struct AdjNode *newNode = (AdjNode*) malloc(sizeof(AdjNode));
	
	newNode->dest = dest;
	newNode->next = NULL;
	
	return newNode;
}

graph *creategraph(int V)
{
	graph *Graph; //=(graph*)malloc(sizeof(graph));
	Graph->V = V;
	
	//create an array of adjacency lists. Size of array will be V
	Graph->array = (AdjList*) malloc(V * sizeof(AdjList));
	
	int i;
	for(i = 0; i < V; i++)
		Graph->array[i].head = NULL;
		
	return Graph;
}

//add an edge to an undirected graph
void addEdge(graph* Graph, int src, int dest)
{
	struct AdjNode* newNode = newAdjNode(dest);
	newNode->next = Graph->array[src].head;
	Graph->array[src].head = newNode;
	
	newNode = newAdjNode(src);
	newNode->next = Graph->array[dest].head;
	Graph->array[dest].head = newNode;
}

void printGraph(graph *Graph)
{
	int v;
	for(v = 0; v < Graph->V; ++v)
	{
	
		struct AdjNode *pCrawl = Graph->array[v].head;
		printf("\nAdjacency list of vertex %d\nhead ", v);
		
		while(pCrawl)
		{
			printf("->%d", pCrawl->dest);
			pCrawl = pCrawl->next;
		}
		printf("\n");
	}
}

int main()
{
	int V = 5;
	graph* Graph = creategraph(V);
	addEdge(Graph, 0, 1);
	addEdge(Graph, 0, 4);
	addEdge(Graph, 1, 2);
	addEdge(Graph, 1, 3);
	addEdge(Graph, 1, 4);
	addEdge(Graph, 2, 3);
	addEdge(Graph, 3, 4);
	
	printGraph(Graph);
	
	return 0;
}
