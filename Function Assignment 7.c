#include <stdio.h>

int printEvenNumbers(int n)
{
    printf("Even Numbers: ");
    for(int i=1; i<=n; i++)
    {

        printf("%d",2*i);
        if (i!=n)
            printf(", ");
    }
}
int main()
{
    int n,r;
    printf("n = ");
    scanf("%d",&n);

    r=printEvenNumbers(n);

    return 0;
}
