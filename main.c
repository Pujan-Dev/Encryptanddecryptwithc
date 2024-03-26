#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void encryptDecrypt(char strings[], char choice) {
    int i, len = strlen(strings);
    for (i = 0; i < len; i++) {
        strings[i] = strings[i] ^ choice; 
    }
}

int main() {
    FILE *inputFile, *outputFile;

    char inputFileName[100], outputFileName[100],strings[20000],choice;
    int operation; // 1 for encryption, 2 for decryption
    system("cls");
    // Welcome message and input
    printf("Welcome to the Encryption/Decryption program\n");
    // Input file name
    printf("Enter the input file name: ");
    scanf("%s", inputFileName);

    // Open the input file for reading
    inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("Error: Unable to open input file.\n");
        return 1; // Exit with error code
    }
    if (fgets(strings, sizeof(strings), inputFile) == NULL) {
        printf("Error: Failed to read input from file.\n");
        fclose(inputFile);
        return 1; // Exit with error code
    }
    fclose(inputFile);

    // Choose operation: encryption or decryption
    printf("Choose operation:\n");
    printf("1. Encryption\n");
    printf("2. Decryption\n");
    scanf("%d", &operation);

    // Input encryption/decryption key
    printf("Enter your encryption/decryption key (a single character): ");
    scanf(" %c", &choice);

    // Perform encryption or decryption based on user's choice
    switch (operation) {
        case 1:
            // Encrypt the input data
            encryptDecrypt(strings, choice);
            break;
        case 2:
            // Decrypt the input data
            encryptDecrypt(strings, choice);
            break;
        default:
            printf("Invalid operation choice.\n");
            return 1; 
    }

    printf("Enter the output file name: ");
    scanf("%s", outputFileName);
    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        printf("Error: Unable to open output file.\n");
        return 1; // Exit with error code
    }
    fprintf(outputFile, "%s", strings);
    fclose(outputFile);
    printf("Operation completed successfully.\n");

    return 0; 
}
