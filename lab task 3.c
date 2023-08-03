#include<stdio.h>
int main()
{
    int i=0;
    for (;;)
    {

        printf("%d ",i);
        i=i+2;
        if(i>=88)
        {
            break;
        }

    }

    return 0;
}
