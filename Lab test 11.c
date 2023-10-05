#include<stdio.h>
int isPrime(int num)
{
    int i;
    for ( i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void findPrimesInRange(int start, int end)
{
    int i;
    for ( i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d is prime\n", i);
        }
    }
}
int main()
{
    int x, n, start, end;
    do
   {
        printf("Choose an x:\n");
        printf("1. Check prime\n");
        printf("2. Find Nth prime\n");
        printf("3. Find prime in range\n");
        printf("Enter your choice: ");
        scanf("%d", &x);
       if(x==1){
            printf("Enter a number to check if it's prime: ");
            scanf("%d", &n);
            if (isPrime(n))
            {
                printf("%d is prime\n", n);
            }
            else
            {
                printf("%d is not prime\n", n);
            }
       }
        if(x==3){
            printf("Enter the start and end values: ");
            scanf("%d %d", &start, &end);
            findPrimesInRange(start, end);
        }
        else{
            printf("Invalid x. Try again.\n");
        }
   }
    while (1);
    return 0;
}
