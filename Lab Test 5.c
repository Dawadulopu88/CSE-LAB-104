#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter the starting range: ");
    scanf("%d",&a);
    printf("Enter the Ending range: ");
    scanf("%d",&b);
    printf("\n");
    for(i=a; i<=b; i++)
    {
        printf("Multiplication Table for %d:\n",i);
        for(j=1; j<=10; j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }

        printf("\n");
    }

    return 0;
}
