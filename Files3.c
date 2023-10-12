# include <stdio.h>

int main()
{
    FILE *filePointer = fopen("example.txt", "r+");

    if (filePointer == NULL)
    {
        perror("Error opening the file");
        return 1;
    }
    fprintf(filePointer, "uap cse\n"); // Write a line to the file

    int character;

    while ((character = fgetc(filePointer)) != EOF)
    {
        //printf("%c ", character);

        if(character=='a' ||character=='e' ||character=='i' ||character=='o' ||character=='u')
        {
            printf("%c ", character);
        }
    }
    fclose(filePointer);

    return 0;
}
