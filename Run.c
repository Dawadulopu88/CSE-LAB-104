#include <stdio.h>
// Function that returns the value of pi
double getPi() {
    return 3.14159265358979323846;
}

// Function that prints the value of pi
void printPi() {
    printf("Value of Pi: %lf\n", getPi());
}

// Function that adds 4 numbers and returns the result
int addFourNumbers(int a, int b, int c, int d) {
    return a + b + c + d;
}

// Function that adds 4 numbers and prints their value
void printSumOfFourNumbers(int a, int b, int c, int d) {
    int sum = addFourNumbers(a, b, c, d);
    printf("Sum of %d, %d, %d and %d: %d\n",a,b,c,d,sum);
}

int main() {
    double pi = getPi();
    printf("Pi: %lf\n", pi);

    printPi();

    int sum = addFourNumbers(2, 4, 6, 8);
    printf("Sum of four numbers: %d\n", sum);

    printSumOfFourNumbers(1, 3, 5, 7);

    return 0;
}
