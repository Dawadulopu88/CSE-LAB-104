#include<stdio.h>
int main(){
int x,y,z;
scanf("%d%d",&x,&y);
for(;x<=y;x++){
if((x%100!=0&&x%4==0)||(x%400==0)){
    printf("");
}else
printf("%d\n",x);
}




return 0;
}
