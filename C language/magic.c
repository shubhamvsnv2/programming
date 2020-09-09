#include <stdio.h>
int getsumfunction(int num);
int getrevfunction(int getsum);
int main()
{
    int n = 0, i, getsum, getrev;
    printf("Enter the number to get magic number :- \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        getsum = getsumfunction(i);
        getrev = getrevfunction(getsum);
        if (getsum * getrev == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
int getsumfunction(int num)
{
    int x, sum = 0;
    while (num > 0)
    {
        x = num % 10;
        sum += x;
        num = num / 10;
    }
    return sum;
}
int getrevfunction(int n)
{
    int x, rev = 0;
    while (n > 0)
    {
        x = n % 10;
        rev = rev * 10 + x;
        n = n / 10;
    }
    return rev;
}