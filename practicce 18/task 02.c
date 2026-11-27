#include<stdio.h>
void printplus(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("+");
		printf("\n");
	}
}
void printplusrev(int n)
{
	int i,j;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		printf("+");
		printf("\n");
	}
}
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	printplus(num);
	printplusrev(num);
}
