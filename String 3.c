#include<stdio.h>
#include<string.h>
void greetUser(char name[]){

printf("Hello, %s\n",name);

}
int main (){
    char userName[100];
printf("Enter your name: ");
//gets(userName, sizeof(userName), stdin);
gets(userName);
greetUser(userName);
return 0;
}
