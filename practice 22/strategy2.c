#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define sentinal INT_MAX
int main()
{
	int i,j,k,count[17],y[16];
	int x[17]={23,45,18,23,17,45,36,23,45,18,36,45,18,17,36,23,17};
	printf("X:");
	for(i=0;i<17;i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n\n");
	for(i=0;i<17;i++)
	{
		for(j=i+1;j<17;j++)
		{
			if(x[i]==x[j])
			{
			x[j]=sentinal;
			count[i]=count[i]+1;
		    }
		   y[i]=x[i];
		}
	}
	printf("Y:");
	for(i=0;i<16;i++)
	{
		if(y[i]!=sentinal)
		printf("%d ",y[i]);
	}
	printf("\n\n");
	for(i=0;i<17;i++)
	printf("%d ",count[i]);
}
	
