#include<stdio.h>
#include<stdlib.h>
void main()
{
    float arr[10],sum;
    printf("Enter the 10 value in number for addition \n");
    for(int i=0;i<9;i++)
    {
        scanf("%f ",&arr[i]);
        sum += arr[i];
    }
    printf("Total sum = %f\n",sum);
}