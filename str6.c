#include<stdio.h>
#include<string.h>
int main(){
char s[100],t[100];
gets(s);
strcpy(t,s);
strrev(s);
int x=strcmp(t,s);
if(x==0)
    printf("Yes");
else
    printf("No");
}
