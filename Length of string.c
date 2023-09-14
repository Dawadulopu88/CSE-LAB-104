#include <stdio.h>

#include <string.h>

// Function to calculate the length of a string

int stringLength(char str[]) {

int length = 0;

while (str[length] != '\0') {

length++;

}

return length-1;

}

int main() {

char inputString[100];

printf("Enter a string: ");

fgets(inputString, sizeof(inputString), stdin);

int length = stringLength(inputString);

printf("Length of the string: %d\n", length);

return 0;

}
