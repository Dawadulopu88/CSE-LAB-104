#include <stdio.h>

int main()
{
    int x,y,i;
    i=1;
    scanf("%d\n", &x);
    scanf("%d", &y);
    do
    {
        printf("%d No. Multiplier of %d: %d\n", i, x, x*i);
        i++;
    }
    while (x*i<= y);
    return 0;
}
