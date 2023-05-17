#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

bool visited[MAX_VERTICES];
int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
int numVertices;


void DFS(int vertex) 
{
    visited[vertex] = true;
    int i,j;
    printf("%d ", vertex);

    for ( i = 0; i < numVertices; i++) {
        if (adjacencyMatrix[vertex][i] && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    int numEdges;
	int i,j;
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);
    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);

    // Initialize visited array
    for ( i = 0; i < numVertices; i++) {
        visited[i] = false;
    }

    // Initialize adjacency matrix
    for ( i = 0; i < numVertices; i++) {
        for ( j = 0; j < numVertices; j++) {
            adjacencyMatrix[i][j] = 0;
        }
    }

    printf("Enter the edges (vertex1 vertex2):\n");
    for (i = 0; i < numEdges; i++) {
        int v1, v2;
        scanf("%d %d", &v1, &v2);
        adjacencyMatrix[v1][v2] = 1;
        adjacencyMatrix[v2][v1] = 1; // Assuming an undirected graph
    }

    int startVertex;
    printf("Enter the starting vertex: ");
    scanf("%d", &startVertex);

    printf("DFS traversal: ");
    DFS(startVertex);

    return 0;
}

