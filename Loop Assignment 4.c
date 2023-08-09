#include <stdio.h>
int main()
{
    int x,y,i;

    scanf("%d%d", &x,&y);
    for (i = 1; i <= x; i++)
    {
        if (i != x)
        {
            printf("1/%d + ", i);
        }
        else
        {
            printf("1/%d", i);
        }
    }
    printf("\n");
    for (i = 1; i <= y; i++)
    {
        if (i != y)
        {
            printf("1/%d + ", i);
        }
        else
        {
            printf("1/%d", i);
        }
    }
    return 0;
}
