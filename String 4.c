#include<stdio.h>
#include<string.h>
void greetUser(char name[],int h){

printf("Hello %s ,your age is %d\n",name,h);

}
int main (){
    char userName[100];
    int h;
printf("Name: ");
//gets(userName, sizeof(userName), stdin);
gets(userName);
printf("Age: ");
scanf("%d",&h);
greetUser(userName,h);
return 0;
}
