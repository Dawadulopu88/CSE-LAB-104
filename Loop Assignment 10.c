#include<stdio.h>
int main(){
int i,j,n;
printf("Enter a Number: ");
scanf("%d",&n);
int number =1;
for(i=0;i<n;i++){
    int x=number;
    for(j=0;j<=i;j++){
        printf("%d ",x);
        x=x/2;
    }
    printf("\n");
    number=number*2;
}

return 0;
}
