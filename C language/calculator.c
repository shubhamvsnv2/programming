#include<stdio.h>
int main()
{
    int n=0,i,option;
    float arr[n];
    printf("how many number you want to input \n");
    scanf("%d",&n);
    printf("Enter the n number of value\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("*********      Please select what operation you want to perform     ************\n\n");
    printf("\t1  Addition \n\t2  Substraction \n\t3  Multiplication \n\t4 Exit");
    scanf("%d",&option)
}