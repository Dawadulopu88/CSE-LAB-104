# include <stdio.h>
# include <stdlib.h>

int main() {
    int *dynamicArray = (int *)malloc(sizeof(int) * 5); // Dynamically allocate an array of size 5

    // Increase the size by reallocating memory
    dynamicArray = (int *)realloc(dynamicArray, sizeof(int) * 150);

    if (dynamicArray == NULL) {
        printf("Memory reallocation failed.");
        return 1;
    }

    // Now, you can use dynamicArray as if it has a size of 10
    int i;
    for (i = 5; i < 150; i++) {
        dynamicArray[i] = i + 1;
        printf("%d ",dynamicArray[i]);
    }

    // Don't forget to free the dynamically allocated memory when done
    free(dynamicArray);

    return 0;
}
