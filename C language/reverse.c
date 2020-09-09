#include<stdio.h>
// #include<math.h>
void main()
{
    int rem,rev=0,n,null=0,i;
    printf("Enter the number in integer you want to print in reverse \n");
    scanf("%d",&n);
    null=n;
    for( i=0;null!=0;++i)
    {
        null=null/10;
    }
    null=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10 + rem;
        n=n/10;
    }
    printf("Reverse of %d is %d \n",null,rev);
}