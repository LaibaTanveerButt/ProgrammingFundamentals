#include<stdio.h>
int main()
{
	int n,sum=0;
	int i;
	for(i=1;i<=5;i++)
	{
		printf("enter number:");
		scanf("%d",&n);
		sum+=n;
		printf("\n");
	}
	printf("sum is :%d",sum);
}
