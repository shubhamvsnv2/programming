#include<stdio.h>
#include<stdlib.h>

float mul(float x,float y)
{
    return(x*y);
}

void main()
{
    float a,b,total;
    printf("Enter ther value of a and b in number \n");
    scanf("%f%f",&a,&b);
    total=mul(a,b);
    printf("multiplication of %f and %f is %f\n",a,b,total);
}