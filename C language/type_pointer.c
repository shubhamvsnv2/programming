#include<stdio.h>
int main()
{
    typedef int* ptr;
    ptr a,b;
    int c=18;
    a=&c;
    b=&c;
    printf("your age is %d\n",*b);
    return 0;
}