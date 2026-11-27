#include<stdio.h>
void printpatt(int n)
{
	int i,j,k;
	for(i=n;i>=1;i--)
	{
		for(k=i;k<n;k++)
		printf(" ");
		for(j=i;j>=1;j--)
		printf("+");
		printf("\n");
	}
}
void printpattrev(int n)
{
   int i,j,k;
   for(i=2;i<=n;i++)
   {
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
	printpatt(num);
	printpattrev(num);
}


