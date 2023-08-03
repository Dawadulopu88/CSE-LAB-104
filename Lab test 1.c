#include<stdio.h>
int main(){
int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
if (a>=b&&a>=c&&a>=d){
    printf("%d is maximum",a);
}else if(b>=a&&b>c&&b>=d){
printf("%d is maximum",b);
}else if(c>=a&&c>b&&c>=d){
printf("%d is maximum",c);
}else{
printf("%d is maximum ",d);
}

return 0;
}
