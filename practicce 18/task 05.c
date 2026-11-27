#include<stdio.h>
void printAlpha(int n)
{
	int i,count;
	char j,k;
	for(i=1;i<=n;i++)
	{
		for(count=1,j='a';count<=n;count++,j+=i)
		printf("%c ",j);
		printf("\n");
	}
}
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	printAlpha(num);
}
