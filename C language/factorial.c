#include<stdio.h>
int main()
{
    int n,fab=1;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    while (n!=0)
    {
        fab = fab*n;
        n--;
    }
    printf("fabbonaci are %d\n",fab);
    return 0;
}