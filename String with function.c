#include<stdio.h>
#include<string.h>
int getLength(char a[]){
int length =0;
while(a[length]!='\0'){
    length++;

}
return length-1;
}
int main (){
char input[100];
gets(input);

printf("%d",getLength(input));

}
