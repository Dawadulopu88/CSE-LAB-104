#include <stdio.h>

int getFibonacci(int n) {
    int previous=0,present=1,next;

    printf("The Fibonacci Series: ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next=previous+present;
            previous=present;
            present=next;
        }
        printf("%d ",next);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the n = ");
    scanf("%d",&n);
    getFibonacci(n);
    return 0;
}




