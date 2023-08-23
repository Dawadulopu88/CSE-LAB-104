#include <stdio.h>

int getPrime(int n) {
    int i,c=0;
    for (i=1;i<=n;i++) {
        if (n%i==0) {
            c++;
        }
    }
    if(c==2){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x,r;
    printf("n = ");
    scanf("%d",&x);
    r =getPrime(x);
    if (r==1) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    return 0;
}
