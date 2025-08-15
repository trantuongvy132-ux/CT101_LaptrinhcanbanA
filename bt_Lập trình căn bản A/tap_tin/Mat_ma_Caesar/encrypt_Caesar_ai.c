#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void encrypt(char *sInput, char *sOutput) {
    FILE *inputFile = fopen(sInput, "r");
    FILE *outputFile = fopen(sOutput, "w");
    
    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening file.\n");
        return;
    }

    char buffer[1000];
    int i;
    while (fgets(buffer, sizeof(buffer), inputFile) != NULL) {
        int length = strlen(buffer);
        for (i = 0; i < length; i++) {
            if (isalpha(buffer[i])) {
                if (isupper(buffer[i])) {
                    buffer[i] = ((buffer[i] - 'A' + 3) % 26) + 'A';
                } else {
                    buffer[i] = ((buffer[i] - 'a' + 3) % 26) + 'a';
                }
            }
        }
        fprintf(outputFile, "%s", buffer);
    }

    fclose(inputFile);
    fclose(outputFile);
}

int main() {
    encrypt("sInput2.txt", "sOutput2.txt");
    return 0;
}

