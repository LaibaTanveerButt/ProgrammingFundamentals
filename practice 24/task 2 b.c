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
   	 for(r=0,k=0;r<4;r++)
   	 {
   	 	printf("%d\t",x[r][k]);
   	 	for(c=0;c<5;c++)
   	 	{
   	 		sum=x[r][c]+x[r][c+1];
   	 		printf("%d\t",sum);
		}
		printf("\n");
	}
 }
