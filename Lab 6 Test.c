#include<stdio.h>
float convert_to_eur(int n){
return n*0.85;
}
float convert_to_gbp(int n){
return n*0.73;
}
int main(){
    float x;
printf("Enter the amount to be converted: ");
scanf("%f",&x);
printf("Convert to:\n1. EUR\n2. GBP\n");
int f;
printf("Enter your choice: ");
scanf("%d",&f);
if(f==1){
   printf("Amount: $%.2f (USD) is equivalent to €%.2f (EUR)",x,convert_to_eur(x)) ;
}else if(f==2){
 printf("Amount: $%.2f (USD) is equivalent to €%.2f (GBP)",x,convert_to_gbp(x)) ;
}else{
printf("Invalid");
}

}
