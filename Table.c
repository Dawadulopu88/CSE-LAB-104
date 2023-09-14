#include<stdio.h>
int table (int n){
    int i;
    for(i=1;i<=10;i++){
    printf("%dX%d=%d\n",n,i,n*i);
    }

}
int main (){


int x;
scanf("%d",&x);
table(x);

return 0;
}
