#include<stdio.h>
#include<string.h>
int main(){
char inputstring[100];
int vowelcount=0;
printf("Enter the string:");
gets(inputstring);
int i;
for(i=1;inputstring[i];i++)
if (inputstring[i]=='a' || inputstring[i]=='e' || inputstring[i]=='i' || inputstring[i]=='o' || inputstring[i]=='u')
    vowelcount++;
printf("Lowercase: %d\n",vowelcount);
return 0;
}


