#include<stdio.h>
int main()
{
	int k,i;
	char chC='A',chS='z';
	printf("enter number of characters:");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		printf("%c %c ",chC,chS);
		chC++;
		chS--;
	}
}
