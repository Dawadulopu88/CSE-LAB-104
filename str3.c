#include<stdio.h>
#include<string.h>
int main(){
char str1[]="Hello ";
char str2[]="world!";
char temp[10]="  ";
strncpy(temp,str1,2);
puts(temp);
strncpy(temp,str2,2);
puts(temp);



}
