#include <stdio.h>
#include <stdlib.h>
int main() {
    char filename[10];
    int count = 1;
    FILE *file;
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file != NULL) {
        char ch;
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '\n') {
                count++;
            }
        }
        fclose(file);
    } else {
        printf("Error: Cannot open file.\n");
        return 1;
    }
    printf("%d\n", count);
    return 0;
}

