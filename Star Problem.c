#include<stdio.h>
int main()
{
    int i,j;
    int n=4;
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
