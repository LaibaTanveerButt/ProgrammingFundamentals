#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 5
int main()
{
	srand(time(0));
	int i=0,j=0,k,r,c,sum=0,sumD=0,sumC=0;
	int x[4][6]={{3,6,8,4,6,1},{7,8,1,9,3,6},{6,8,4,1,8,8},{4,9,8,8,4,8}};
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		printf("%d\t",x[i][j]);
		printf("\n");
	}
	printf("\n");
	i=0,j=0;
	printf("%d\t",x[i][j]);
	for(i=0,j=0;j<5;j++)
	{
		sum=x[i][j]+x[i][j+1];
		printf("%d\t",sum);
	}
	printf("\n");
	for(i=0,k=0;i<3;i++)
	{
		sumC=x[i][k]+x[i+1][k];
		printf("%d\t",sumC);
		for(j=0;j<5;j++)
		{
			sumD=x[i+1][j]+x[i][j+1];
			printf("%d\t",sumD);
		}
		printf("\n");
	}
}	
