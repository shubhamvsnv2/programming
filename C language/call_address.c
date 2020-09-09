#include<stdio.h>
void change_Value(int * address)
{
   * address = 400;
}
int main()
{
    int a = 34 , b = 56;
    printf("value of a now is %d\n",a);
    change_Value(&a);
    printf("value of a now is %d\n",a);
    return 0;
}