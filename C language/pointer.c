#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10;
    int *ptr = &a;
    printf("value of a is %d \n",a);
    printf("address of ptr is %d \n",ptr);
    printf("value of ptr is %d \n",*ptr);
    printf("address of a is %d\n",&a);
    ptr++;
    printf("address of ptr after increament is %d\n",ptr);
    ptr++;
    printf("address of ptr after increament is %d\n",ptr);
        return 0;
}