#include <stdio.h>
#include<math.h>
int main()
{
    int x;
   // int y=INFINITY;
    //x = 0;
    while (1)
    {
        int n;
        printf("Enter The Number: ");
        scanf("%d", &n);
        if (n == 0)
        {
            printf("The Number %d is Zero\n",n);
        }
        else if (n > 0)
        {
            printf("The Number %d is Positive\n",n);
        }
        else
        {
            printf("The Number %d is Negative\n",n);

        }

        x++;
    }
    return 0;
}
