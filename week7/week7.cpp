
#include <stdio.h>
#include <string.h>

int main() {
    int i, kl;
    char cipher[50], plain[50], key[50];

    printf("Enter plain text: ");
    fgets(plain, sizeof(plain), stdin);
    plain[strcspn(plain, "\n")] = '\0';

    printf("Enter the encryption key: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    kl = strlen(key);

    // Encryption
    for (i = 0; plain[i] != '\0'; i++)
        cipher[i] = plain[i] ^ kl;

    cipher[i] = '\0';
    printf("Encrypted text is: %s\n", cipher);

    // Decryption
    for (i = 0; cipher[i] != '\0'; i++)
        plain[i] = cipher[i] ^ kl;

    plain[i] = '\0';
    printf("Decrypted text is: %s\n", plain);

    return 0;
}
