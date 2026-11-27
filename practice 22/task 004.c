#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int i,j,k,y[10],isRepeat=0,count=0;
	int x[17]={23,45,18,23,17,45,36,23,45,18,36,45,18,17,36,23,17};
	for(i=0;i<17;i++)
	printf("%d ",x[i]);
	printf("\n");
	for(i=0;i<17;i++)
	{
		count=0;
		for(j=0; j<17; j++)
		{
			if(x[i]==x[j])
			{
				isRepeat=1;
				count++;
			}
			else
			isRepeat=0;
			y[i]=count;
		}
		if(isRepeat==1)
		printf("%d ",x[i]);
	}
	printf("\n");
	for(i=0;i<count;i++)
	{
		printf("%d ",y[i]);
	}
}
