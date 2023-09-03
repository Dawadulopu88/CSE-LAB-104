#include<stdio.h>
#include<string.h>
int stringLength(char str[]){
int length=0;
while(str[length]!='\0'){
    length++;

}
return length-1;
}
int main(){
char inputString[100];
printf("Enter a string:");
fgets(inputString,sizeof(inputString),stdin);
      int length=stringLength(inputString);
printf("Length of string %d",length);
return 0;
}

