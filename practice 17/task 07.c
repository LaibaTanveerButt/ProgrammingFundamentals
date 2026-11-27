#include<stdio.h>
int main()
{
	int i,j,k,r;
	printf("enter rows:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(k=r;k>i;k--)
		printf(" ");
		printf("%d",i);
		printf("\n");
	}
}
	
	

