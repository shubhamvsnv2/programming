#include<stdio.h>
int main()
{
    typedef float floating;
    floating a,b,sum;
    printf("Enter the value of a and b \n");
    scanf("%f%f",&a,&b);
    sum = a+b;
    printf("sum of a and b is %f\n",sum);
    return 0;
}