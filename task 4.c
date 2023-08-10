#include<stdio.h>
int main(){
int i,j,n;
int a=1;
printf("Enter the number of row: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=i;j=j+1){
        printf("%d ",a);
        a++;
    }
    printf("\n");
}




return 0;
}

