
#include <stdio.h>

struct Frame {
    int seq_no;
    char data[50];
};

void sortFrames(struct Frame b[], int n) {
    int i, j;
    struct Frame key;

    for (i = 1; i < n; i++) {
        key = b[i];
        j = i - 1;

        while (j >= 0 && b[j].seq_no > key.seq_no) {
            b[j + 1] = b[j];
            j--;
        }

        b[j + 1] = key;
    }
}

int main() {
    int n, i;
    struct Frame b[50];

    printf("Enter the number of frames: ");
    scanf("%d", &n);

    printf("\nEnter frames in random arrival order:\n");

    for (i = 0; i < n; i++) {
        printf("Frame %d -> Enter sequence number: ", i + 1);
        scanf("%d", &b[i].seq_no);

        printf("Frame %d -> Enter frame data: ", i + 1);
        scanf("%49s", b[i].data);
    }

    printf("\n--- Frames Received in Buffer (Random Order) ---\n");
    for (i = 0; i < n; i++)
        printf("Seq No: %d | Data: %s\n", b[i].seq_no, b[i].data);

    sortFrames(b, n);

    printf("\n--- Frames After Sorting (Sequential Order) ---\n");
    for (i = 0; i < n; i++)
        printf("Seq No: %d | Data: %s\n", b[i].seq_no, b[i].data);

    return 0;
}
