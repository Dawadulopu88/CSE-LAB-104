#include<stdio.h>
long long int getFactorial(int n){
long long int a=1;
for(int i=2;i<=n;i++){
    a=a*i;
}
return a;
}
int main(){
int x;
printf("n = ");
scanf("%d",&x);
printf("%d! = %lld",x,getFactorial(x));
return 0;
}
