#include<stdio.h>
#include<string.h>
int main(){
char str1[]=" Hello ";
char str2[]="   world!";
//strcat(str1,str2);
//puts(str1);
//strncat(str1,str2,2);
//puts(str1);
//strcpy(str1,str2);
//puts(str1);
strncpy(str1,str2,3);
puts(str1);

return 0;
}



