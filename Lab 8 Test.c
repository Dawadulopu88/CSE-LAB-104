#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int i;
    int c=0;
    for(i=0; i<100; i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            c++;
        }
    }


    printf("%d\n",c);
    return 0;
}


