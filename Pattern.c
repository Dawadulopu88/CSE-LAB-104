#include<stdio.h>
int main(){
int i,j,n;
printf("Enter number of row N: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        printf("%d ",j);
    }
    for(j=j-1;j>=1;j--){
        printf("%d ",j);
    }
    printf("\n");


}

return 0;
}

