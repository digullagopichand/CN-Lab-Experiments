
#include <stdio.h>
#include <stdlib.h>

struct Edge {
    int u, v, cost;
};

int parent[10];

int find(int vertex) {
    while (parent[vertex])
        vertex = parent[vertex];
    return vertex;
}

int compare(const void *a, const void *b) {
    return ((struct Edge *)a)->cost - ((struct Edge *)b)->cost;
}

int main() {
    struct Edge edges[45], temp;
    int n, m = 0, i, j, u, v, mincost = 0, count = 1;

    printf("\nImplementation of Kruskal's Algorithm for Broadcast Tree\n");
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the cost adjacency matrix:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            scanf("%d", &u);
            if (j > i && u != 0) {
                edges[m].u = i;
                edges[m].v = j;
                edges[m++].cost = u;
            }
        }

    qsort(edges, m, sizeof(struct Edge), compare);

    printf("\nThe edges of Minimum Cost Spanning Tree are:\n");

    for (i = 0; i < m && count < n; i++) {
        u = find(edges[i].u);
        v = find(edges[i].v);

        if (u != v) {
            parent[v] = u;
            printf("%d. Edge (%d, %d) = %d\n",
                   count++, edges[i].u, edges[i].v, edges[i].cost);
            mincost += edges[i].cost;
        }
    }

    if (count == n)
        printf("\nMinimum Cost = %d\n", mincost);
    else
        printf("\nSpanning tree does not exist.\n");

    return 0;
}