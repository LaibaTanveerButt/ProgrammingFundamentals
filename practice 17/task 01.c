#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter k:");
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		printf("%d\t%d\n",i,j);
	}
}
