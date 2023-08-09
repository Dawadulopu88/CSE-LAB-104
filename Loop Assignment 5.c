#include<stdio.h>
int main(){
int x,i;
scanf("%d",&x);
i=1;
while(i<=x){
    if((i%4==0&&i%100!=0)||(i%400==0)){
    printf("%d\n",i);
    }
    i++;
}

return 0;
}
