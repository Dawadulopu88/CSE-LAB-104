# include <stdio.h>

int main() {
    FILE *filePointer = fopen("example.txt", "r"); // Open the file for reading

    if (filePointer == NULL) {
        printf("File could not be opened.\n");
        return 1; // Exit the program with an error code
    }

    char buffer[100]; // Create a buffer to store the line
    fgets(buffer, sizeof(buffer), filePointer); // Read a line from the file
    printf("Read: %s", buffer); // Print the read line

    fclose(filePointer); // Close the file

    return 0; // Exit the program successfully
}
