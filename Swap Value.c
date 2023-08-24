#include<stdio.h>
int a,b;//Global Variable
int swap(){
int temp=a;
a=b;
b=temp;

}
int main (){
scanf("%d%d",&a,&b);
printf("Before:%d %d\n",a,b);//5,10
swap(a,b);
printf("After:%d %d",a,b);//10,5




return 0;
}
