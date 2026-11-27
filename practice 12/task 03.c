#include<stdio.h>
int main()
{
	int n,i;
	printf("enter number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		for(i=1;i<=n;i++)
		printf("%d ",i);
	}
	else
	{
		for(i=n;i>=1;i--)
		printf("%d ",i);
	}
}
