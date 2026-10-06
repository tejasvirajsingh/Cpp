#include <stdio.h>
#include <string.h>

void encryption()
{
    char mess[100];
    int key, i;

    printf("Enter the text: ");
    scanf(" %[^\n]", mess);

    printf("Enter the key (0-25): ");
    scanf("%d", &key);

    for(i = 0; mess[i] != '\0'; i++)
    {
        if(mess[i] >= 'a' && mess[i] <= 'z')
            mess[i] = ((mess[i] - 'a' + key) % 26) + 'a';

        else if(mess[i] >= 'A' && mess[i] <= 'Z')
            mess[i] = ((mess[i] - 'A' + key) % 26) + 'A';
    }

    printf("\nEncrypted Text: %s\n", mess);
}

void decryption()
{
    char mess[100];
    int key, i;

    printf("Enter the text: ");
    scanf(" %[^\n]", mess);

    printf("Enter the key (0-25): ");
    scanf("%d", &key);

    for(i = 0; mess[i] != '\0'; i++)
    {
        if(mess[i] >= 'a' && mess[i] <= 'z')
            mess[i] = ((mess[i] - 'a' - key + 26) % 26) + 'a';

        else if(mess[i] >= 'A' && mess[i] <= 'Z')
            mess[i] = ((mess[i] - 'A' - key + 26) % 26) + 'A';
    }

    printf("\nDecrypted Text: %s\n", mess);
}

int main()
{
    int choice;

    printf("===== Caesar Cipher =====\n");
    printf("1. Encryption\n");
    printf("2. Decryption\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        encryption();

    else if(choice == 2)
        decryption();

    else
        printf("Invalid choice!\n");

    return 0;
}