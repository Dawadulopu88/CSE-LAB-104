#include<stdio.h>
#include<math.h>
int main ()
{
    int x,i;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        int square=pow(i,2);
        int cube=pow(i,3);
        printf("Square and cube of %d : %d %d\n",i,square,cube);
    }

    return 0;
}
