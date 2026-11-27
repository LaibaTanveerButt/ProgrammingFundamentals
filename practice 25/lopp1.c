#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter number of lines on which yoy want to print pattern:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
