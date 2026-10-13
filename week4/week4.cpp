#include <stdio.h>
#define MAX 10
#define INF 9999

int main() {
    int cost[MAX][MAX], distance[MAX], visited[MAX] = {0};
    int parent[MAX], path[MAX], n, source, destination;
    int i, j, min, next, count = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter the cost matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if (i != j && cost[i][j] == 0)
                cost[i][j] = INF;
        }

    printf("Enter source vertex: ");
    scanf("%d", &source);
    printf("Enter destination vertex: ");
    scanf("%d", &destination);

    for (i = 0; i < n; i++) {
        distance[i] = INF;
        parent[i] = -1;
    }

    distance[source] = 0;

    for (i = 0; i < n; i++) {
        min = INF;
        next = -1;

        for (j = 0; j < n; j++)
            if (!visited[j] && distance[j] < min)
                min = distance[j], next = j;

        if (next == -1) break;

        visited[next] = 1;

        for (j = 0; j < n; j++)
            if (!visited[j] && cost[next][j] != INF &&
                distance[next] + cost[next][j] < distance[j]) {
                distance[j] = distance[next] + cost[next][j];
                parent[j] = next;
            }
    }

    if (distance[destination] == INF)
        printf("\nNo path exists.");
    else {
        printf("\nMinimum Cost = %d\n", distance[destination]);

        for (i = destination; i != -1; i = parent[i])
            path[count++] = i;

        printf("Shortest Path: ");
        for (i = count - 1; i >= 0; i--) {
            printf("%d", path[i]);
            if (i) printf(" -> ");
        }
    }

    return 0;
}