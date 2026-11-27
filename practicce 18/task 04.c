#include<stdio.h>
void patt(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
    for(j=n;j>=i;j--)
	printf("+");
	for(k=1;k<i;k++)
	printf(" ");
	for(k=1;k<i;k++)
	printf(" ");
	for(j=n;j>=i;j--)
	printf("+");
	printf("\n");
    }
}
void printpatt(int n)
{
	int i,j,k;
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("+");
		for(k=n;k>i;k--)
		printf(" ");
		for(k=n;k>i;k--)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("+");
		printf("\n");
	}
}
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	patt(num);
	printpatt(num);
}
