#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 5
int main()
{
	srand(time(0));
	int i,j,k,r,c,sum=0,sumR=0,sumC=0;
	int x[4][6]={{3,6,8,4,6,1},{7,8,1,9,3,6},{6,8,4,1,8,8},{4,9,8,8,4,8}};
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		printf("%d\t",x[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0,j=0;j<6;j++)
	printf("%d\t",x[i][j]);
	printf("\n");
	for(r=0; r<3 ;r++)
	{
		for(j=0;j<6;j++)
		{
			sum=x[r+1][j]+x[r][j];
			printf("%d\t",sum);
			sum=0;
		}
		printf("\n");
	}
	printf("\n");
    
	
}
