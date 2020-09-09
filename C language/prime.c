#include<stdio.h>
void prime(int n)
{
  int flag=0,i,j;
  for(i=2;i<n/2;i++)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }
  if(n==1)
  {
      printf("1 is neither prime nor composite\n");
  }
  else{
      if(flag==0){
          printf("%d is prime number\n",n);
      }
      else{
          printf("%d is composite number\n",n);
      }
  }
}
int main()
{
    int n;
    printf("Enter the value in integer to check the 'prime number' or 'not prime number'\n");
    scanf("%d",&n);
    prime(n);
}
