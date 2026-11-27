#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int m,n,p,q;
	printf("enter rows of m1:");
	scanf("%d",&m);
	printf("enter columns of m1:");
	scanf("%d",&n);
	printf("enter rows of m2:");
	scanf("%d",&p);
	printf("enter columns of m2:");
	scanf("%d",&q);
	int m1[m][n],m2[p][q],i,j,res=0,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			m1[m][n]=rand()%9+1;
			printf("%d	",m1[m][n]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			m2[p][q]=rand()%9+1;
			printf("%d	",m2[p][q]);
		}
		printf("\n");
	}
	if(n==p)
	{
	//columns of first matrix must equal to rows of second matrix
	for(i=0;i<p;i++)
	{
		for(k=0;k<p;k++)
		{
			res=0;
		for(j=0;j<p;j++)
		{
			res+=(m1[k][j]*m2[j][k]);
		}
		printf("%d	",res);
	  }
	}
}
	return 0;
}	
