#include <stdio.h>

int getTriangleArea(int b, int h) {
    return 0.5*b*h;
}

int main() {
    int b,h;
    printf("base = ");
    scanf("%d",&b);
    printf("Height = ");
    scanf("%d", &h);

    int r=getTriangleArea(b,h);
    printf("Area = %d",r);

    return 0;
}

