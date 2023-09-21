#include<stdio.h>
#include<string.h>
int main(){
char str[]="Hello world!";
int length;
length=strlen(str);
printf("%d\n",length);
strlwr(str);
puts(str);
strupr(str);
puts(str);

return 0;
}


