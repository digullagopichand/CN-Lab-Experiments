
#include <stdio.h>

int main() {
    int n, i, j, k, change, cost[20][20];
    int dist[20][20], next[20][20];

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the cost matrix:\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            dist[i][j] = cost[i][j];
            next[i][j] = j;
        }

    do {
        change = 0;

        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                for (k = 0; k < n; k++)
                    if (dist[i][j] > cost[i][k] + dist[k][j]) {
                        dist[i][j] = cost[i][k] + dist[k][j];
                        next[i][j] = k;
                        change = 1;
                    }
    } while (change);

    for (i = 0; i < n; i++) {
        printf("\nRouting table for Router %d\n", i + 1);
        printf("Destination\tNext Hop\tDistance\n");

        for (j = 0; j < n; j++)
            printf("%d\t\t%d\t\t%d\n",
                   j + 1, next[i][j] + 1, dist[i][j]);
    }

    return 0;
}
