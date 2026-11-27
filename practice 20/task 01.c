#include<stdio.h>
void printBox(int r,int c)
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==1 || i==r || j==1 || j==c)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
int main()
{
	int rows,cols;
	printf("enter rows:");
	scanf("%d",&rows);
	printf("enter columns:");
	scanf("%d",&cols);
	printBox(rows,cols);
}
