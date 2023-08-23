
#include <stdio.h>

int getVowelOrConsonant(char c) {

if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return 1;
        } else {
            return 0;
        }
    }



int main() {
    char c;
    printf("Character: ");
    scanf("%c",&c);

    int r=getVowelOrConsonant(c);
    if (r==1) {
        printf("Vowel");
    } else if (r==0) {
        printf("Consonant");
    }

    return 0;
}
