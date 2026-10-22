#include <stdio.h>

int main() {
    int cap, rate, in, count = 0;
    int sent, drop, i = 0, ch;
    int received[100], s[100], d[100], r[100];

    printf("Enter Bucket Size: ");
    scanf("%d", &cap);

    printf("Enter Output Rate: ");
    scanf("%d", &rate);

    do {
        printf("\nEnter number of packets coming at second %d: ", i + 1);
        scanf("%d", &in);

        received[i] = in;

        count = count + in;

        if (count > cap) {
            drop = count - cap;
            count = cap;
        } else {
            drop = 0;
        }

        if (count > rate)
            sent = rate;
        else
            sent = count;

        count = count - sent;

        s[i] = sent;
        d[i] = drop;
        r[i] = count;

        i++;

        printf("Enter 1 to continue or 0 to quit: ");
        scanf("%d", &ch);

    } while (ch == 1 && i < 100);+

    while (count > 0 && i < 100) {
        received[i] = 0;
        drop = 0;

        if (count > rate)
            sent = rate;
        else
            sent = count;

        count = count - sent;

        s[i] = sent;
        d[i] = drop;
        r[i] = count;

        i++;
    }

    printf("\nSecond\tReceived\tSent\tDropped\tRemaining\n");
    printf("------------------------------------------------\n");

    for (int j = 0; j < i; j++) {
        printf("%d\t%d\t%d\t%d\t%d\n",
               j + 1, received[j], s[j], d[j], r[j]);
    }

    return 0;
}
