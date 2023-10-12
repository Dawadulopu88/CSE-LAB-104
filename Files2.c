# include <stdio.h>

int main() {
    FILE *filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        perror("Error opening the file");
        return 1;
    }

    int character;

    while ((character = fgetc(filePointer)) != EOF) {
        printf("%c", character);
    }

    fclose(filePointer);

    return 0;
}
