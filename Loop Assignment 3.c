#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);
    for(i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            printf("%d",i);
            if(i!=x)
            {
                printf(",");
            }
        }
    }
    printf("\n");
    for(i=1; i<=y; i++)
    {
        if(y%i==0)
        {
            printf("%d",i);
            if(i!=y)
            {
                printf(",");
            }
        }
    }
    return 0;
}
