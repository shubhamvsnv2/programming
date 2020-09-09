#include<stdio.h>
#include<math.h>
int main()
{
    int rem,n,null=0,i;
    float result=0;
    printf("Enter three digit number in integer you want to print in reverse \n");
    scanf("%d",&n);
    null=n;
  /*  for( i=0;null!=0;++i)
    {
        null=null/10;
    }*/
    // null=n;
    while(n!=0)
    {
        rem=n%10;
        result += rem*rem*rem;
        n=n/10;
    }
    printf("%f\n",result);
    return 0;
}