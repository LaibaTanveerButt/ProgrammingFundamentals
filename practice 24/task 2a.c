#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void printIndex(int x[6][6],int elem)
{
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
	     if(x[i][j]==elem)
	     printf("index of %d is:[%d][%d]\n",x[i][j],i,j);
	}
}
int main()
{
	srand(time(0));
	int a[6][6]={{23,45,67,89,23,12},{23,45,67,89,90,12},{56,78,90,98,76,54},{12,3,45,6,78,90},{12,34,56,78,65,43},{12,23,45,67,89,9}};
	int i,j,element;
	printf("\n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("enter element you want to print index:");
	scanf("%d",&element);
	printIndex(a,element);
}
