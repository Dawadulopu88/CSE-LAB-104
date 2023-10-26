#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    char ch;
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);
    printf("Enter the destination file name: ");
    scanf("%s", destFileName);
    sourceFile = fopen(sourceFileName, "rb");
    if (sourceFile == NULL) {
        printf("Error opening source file. Check if the file exists or the path is correct.\n");
        return 1;
    }
    destFile = fopen(destFileName, "wb");
    if (destFile == NULL) {
        printf("Error opening destination file. Check if the file path is correct or if you have permission to write to it.\n");
        fclose(sourceFile);
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    printf("File copied successfully!\n");
    return 0;
}
