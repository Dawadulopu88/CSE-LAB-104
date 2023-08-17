#include<stdio.h>
float getArea(float r)
{
    return 3.1416*r*r;

}
void printVolume(float r)
{

    printf("%f ", (4*r*getArea(r))/3);

}


int main ()
{
    float y;
    scanf("%f",&y);
    printf("%f\n",getArea(y));

    printVolume(y);

return 0;
}
