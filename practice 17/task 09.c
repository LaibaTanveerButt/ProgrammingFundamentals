#include<stdio.h>
int main()
{
	int i,j,k,r,c;
	char ch='a';
	printf("enter rows:");
	scanf("%d",&r);
	printf("enter columns:");
	scanf("%d",&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		printf("%d ",i);
		printf("\n");
		for(k=1;k<=c;k++)
		printf("%c ",ch);
		printf("\n");
		ch++;
	}
}
