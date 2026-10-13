
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[220];
    int i, j = 8, count = 0;

    printf("Enter input frame (0's & 1's):\n");
    scanf("%99s", a);

    printf("Entered input: %s\n", a);

    strcpy(b, "01111110");

    for (i = 0; a[i]; i++) {
        b[j++] = a[i];
        count = (a[i] == '1') ? count + 1 : 0;

        if (count == 5) {
            b[j++] = '0';
            count = 0;
        }
    }

    b[j] = '\0';
    strcat(b, "01111110");

    printf("After stuffing, the frame is:\n%s", b);

    return 0;
}
