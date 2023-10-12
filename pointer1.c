#include<stdio.h>
int main()
{
    int a=5;
    int*b;
    b=&a;
    printf("%d\n",b);
    printf("%d",*b);

    return 0;
}
