#include<stdio.h>
float getArea(float r){
return 3.1416*r*r;
}
int main (){
    float x;
scanf("%f",&x);
printf("%.3f",getArea(x));

}
