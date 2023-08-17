#include<stdio.h>
int GetMax(int a , int b){
int m;
if(a>b)
return a;
else
return b;
}


int main(){
    int a,b;
scanf("%d%d",&a,&b);
printf("%d",GetMax(a,b));
}
