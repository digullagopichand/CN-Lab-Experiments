
#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) (((x) > (y)) ? (y) : (x))
#define MAX_TIME 100

int main() {
    int cap, orate;
    int inp[MAX_TIME] = {0};
    int i = 0, nsec = 0, ch = 0;
    int count = 0, drop = 0, sent = 0, incoming = 0;

    printf("\nEnter Bucket Size: ");
    if (scanf("%d", &cap) != 1) return 1;

    printf("Enter Output Rate: ");
    if (scanf("%d", &orate) != 1) return 1;

    do {
        if (i >= MAX_TIME) {
            printf("\nMaximum time limit reached.\n");
            break;
        }

        printf("\nEnter number of packets coming at second %d: ", i + 1);
        if (scanf("%d", &inp[i]) != 1) return 1;

        i++;

        printf("Enter 1 to continue or 0 to quit: ");
        if (scanf("%d", &ch) != 1) return 1;

    } while (ch);

    nsec = i;

    printf("\nSecond\tReceived\tSent\tDropped\tRemaining\n");
    printf("----------------------------------------------------\n");

    for (i = 0; count > 0 || i < nsec; i++) {
        incoming = (i < nsec) ? inp[i] : 0;

        if (incoming + count > cap) {
            drop = incoming + count - cap;
            count = cap;
        } else {
            drop = 0;
            count += incoming;
        }

        sent = MIN(count, orate);
        count -= sent;

        printf("%d\t%d\t\t%d\t%d\t%d\n",
               i + 1, incoming, sent, drop, count);
    }

    return 0;
}
