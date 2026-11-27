#include<stdio.h>
void printMultiples(int n,int k)
{
	int i,j;
	for(i=1;i<=k;i++)
	{
		printf("%d\t",i*n);
	}
}
void main()
{
	int num,knum;
	printf("enter num:");
	scanf("%d",&num);
	printf("enter n of multiples:");
	scanf("%d",&knum);
	printMultiples(num,knum);
}
