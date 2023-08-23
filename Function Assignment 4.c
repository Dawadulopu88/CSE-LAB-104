#include <stdio.h>

int getSum(int n){
    int sum=0;
while(n>0){
        int d=n%10;
        sum=sum+d;
        n=n/10;
    }

    return sum;
}
int main() {
    int n;
    printf("n = ");
    scanf("%d",&n);
int r=getSum(n);
    printf("Sum = %d",r);

    return 0;
}
