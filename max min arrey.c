#include<stdio.h>
int findmax(int arr[],int n){
int m,i;
m=arr[0];
for(i=1;i<n;i++)
    if(m<arr[i])
    m=arr[i];
return m;
}
int findmin(int arr[],int n){
int m,i;
m=arr[0];
for(i=1;i<n;i++)
    if(m>arr[i])
    m=arr[i];
return m;
}
int main(){
int a[]={1,2,3,4,5,6,7};
int p=findmax(a,7);
int q=findmin(a,7);
printf("Highest:%d\nLowest:%d",p,q);

}
