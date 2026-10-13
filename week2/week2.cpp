
#include <stdio.h>
#include <string.h>

void xor_operation(char a[], char b[], int n) {
    for (int i = 0; i < n; i++)
        a[i] = (a[i] == b[i]) ? '0' : '1';
}

void crc(char data[], char key[]) {
    int len_data = strlen(data);
    int len_key = strlen(key);
    int n = len_key - 1;
    char temp[50], divisor[50];

    strcpy(temp, data);

    for (int i = 0; i < n; i++)
        strcat(temp, "0");

    strcpy(divisor, key);

    for (int i = 0; i < len_data; i++) {
        if (temp[i] == '1')
            xor_operation(&temp[i], divisor, len_key);
    }

    char remainder[50];
    strncpy(remainder, &temp[len_data], n);
    remainder[n] = '\0';

    char codeword[50];
    strcpy(codeword, data);
    strcat(codeword, remainder);

    printf("\nCRC Remainder      : %s\n", remainder);
    printf("Transmitted Codeword : %s\n", codeword);
}

int main() {
    char data[50], key[50];

    printf("Enter the binary dataword: ");
    scanf("%49s", data);

    printf("Enter the generator polynomial (divisor): ");
    scanf("%49s", key);

    crc(data, key);

    return 0;
}
