 
#include <stdio.h>

int main() {
    int n, w, lost, i, j;

    printf("Enter Total Number of Frames: ");
    scanf("%d", &n);
    printf("Enter Window Size: ");
    scanf("%d", &w);
    printf("Enter Lost Frame Number (-1 if no loss): ");
    scanf("%d", &lost);

    for (i = 0; i < n; i += w) {
        printf("\nSending Window:\n");
        for (j = i; j < i + w && j < n; j++)
            printf("Frame %d Sent\n", j);

        printf("\n----- Receiver Side -----\n");

        if (lost >= i && lost < i + w && lost < n) {
            for (j = i; j < lost; j++)
                printf("Frame %d Received\nACK %d Sent\n", j, j);

            printf("Frame %d Lost\n", lost);

            for (j = lost + 1; j < i + w && j < n; j++)
                printf("Frame %d Discarded (Out of Order)\n", j);

            printf("\nTimeout Occurred\nGo-Back-N Retransmission Begins\n\n");

            for (j = lost; j < i + w && j < n; j++)
                printf("Retransmitting Frame %d\nFrame %d Received\nACK %d Sent\n",
                       j, j, j);
        } else {
            for (j = i; j < i + w && j < n; j++)
                printf("Frame %d Received\nACK %d Sent\n", j, j);
        }
    }

    printf("\nAll Frames Successfully Transmitted.\n");
    return 0;
}
 
