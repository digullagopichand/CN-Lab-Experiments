#include <stdio.h>

int main() {
    int cost[10][10], visited[10] = {0};
    int n, i, j, u, v;
    int min, mincost = 0, count = 1;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix:\n");

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }

    visited[1] = 1;

    printf("\nEdges of Minimum Cost Spanning Tree:\n");

    while (count < n) {
        min = 9999;

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {

                if (visited[i] == 1 && visited[j] == 0) {
                    if (cost[i][j] != 0 && cost[i][j] < min) {
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        if (min == 9999) {
            printf("Spanning tree does not exist\n");
            return 0;
        }

        printf("Edge (%d, %d) = %d\n", u, v, min);

        visited[v] = 1;
        mincost = mincost + min;
        count++;
    }

    printf("\nMinimum Cost = %d\n", mincost);

    return 0;
}
