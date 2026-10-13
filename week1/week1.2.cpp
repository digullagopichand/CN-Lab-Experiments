 
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[300];
    int i = 0, j = 0;

    printf("Enter data: ");
    scanf("%99s", a);

    strcpy(b, "flag");
    j = 4;

    while (a[i] != '\0') {
        if (strncmp(a + i, "flag", 4) == 0) {
            strcpy(b + j, "esc");
            j += 3;
            strncpy(b + j, "flag", 4);
            j += 4;
            i += 4;
        }
        else if (strncmp(a + i, "esc", 3) == 0) {
            strcpy(b + j, "esc");
            j += 3;
            strncpy(b + j, "esc", 3);
            j += 3;
            i += 3;
        }
        else {
            b[j++] = a[i++];
        }
    }

    b[j] = '\0';
    strcat(b, "flag");
 	printf("Enter input: %s\n", a);
    printf("Stuffed frame: %s\n", b);

    return 0;
}
 
