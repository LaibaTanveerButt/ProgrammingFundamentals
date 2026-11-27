#include<stdio.h>
int main()
{
	int n,max=0;
	int i;
	for(i=1;i<=5;i++)
	{
		printf("enter number:");
		scanf("%d",&n);
		if(n>=max)
		max=n;
		printf("\n");
	}
	printf("max is :%d",max);
}
