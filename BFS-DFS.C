#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int graph[MAX][MAX]; // Adjacency matrix
int visited[MAX];    // Visited array for DFS and BFS
int queue[MAX];      // Queue for BFS
int front = -1, rear = -1;

// Function to add an edge to the graph
void addEdge(int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1; // Assuming undirected graph
}

// Function for BFS traversal
void bfs(int start, int n) {
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    front = rear = -1; // Reset queue
    queue[++rear] = start;
    visited[start] = 1;

    printf("BFS: ");
    while (front != rear) {
        int current = queue[++front];
        printf("%d ", current);

        // Traverse all neighbors of the current node
        for (int i = 0; i < n; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

// Function for DFS traversal
void dfs(int node, int n) {
    visited[node] = 1;
    printf("%d ", node);

    // Visit all unvisited neighbors
    for (int i = 0; i < n; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            dfs(i, n);
        }
    }
}

// Driver code
int main() {
    int n, edges, u, v, start;

    // Input number of vertices and edges
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    // Initialize graph to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }

    // Input edges
    printf("Enter the edges (u v):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }

    // Input the starting vertex
    printf("Enter the starting vertex: ");
    scanf("%d", &start);

    // Perform BFS
    bfs(start, n);

    // Reset visited array for DFS
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    // Perform DFS
    printf("DFS: ");
    dfs(start, n);
    printf("\n");

    return 0;
}
