#include<stdio.h>
int main()
{
	int i,r,k;
	printf("Rows:");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(k=0;k<i;k++)
		printf(" ");
		printf("\\");
	    printf("\n");
	}
	for(k=0;k<r;k++)
	printf(" ");
	for(i=0;i<r;i++)
	{
		printf("-");
	}
	printf("\n");
	for(i=r;i>0;i--)
	{
		for(k=i-1;k>0;k--)
		printf(" ");
		printf("/");
	    printf("\n");
	}
	
	
	
}
