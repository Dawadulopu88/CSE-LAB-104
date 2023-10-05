#include<stdio.h>
typedef struct Point P;

struct Point
{
    int x;
    int y;
};
int main()
{
    P arr[10];
    int i ;
    for(i=0;i<2;i++)
    {
        puts("Enter x:");
        scanf("%d", &arr[i].x);
        puts("Enter y:");
        scanf("%d", &arr[i].y);
    }

    for(i=0;i<2;i++)
    {
        printf("Point %d = (%d, %d) \n", i, arr[i].x,arr[i].y);
    }

}
