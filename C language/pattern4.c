#include<stdio.h>
int main()
{
	int i,j,n;
	printf("The equilateral triangle pattern print :- \n");
	printf("Enter the value of n \n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=2*n;j++)
		{
			if(j>=n-i && j<=n+i)
			{
//				printf("%d",i);
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
