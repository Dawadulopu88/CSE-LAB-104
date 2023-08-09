#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if (x<200)
    {
        printf("Has not been observed yet\n");
    }
    else
    {
        int year = 200;

        while (year <= x)
        {
            printf("%d\n", year);
            year += 200;
        }
    }

    if (y<200)
    {
        printf("Has not been observed yet\n");
    }
    else
    {
        int year = 200;

        while (year <= y)
        {
            printf("%d\n", year);
            year += 200;
        }
    }

    return 0;
}
