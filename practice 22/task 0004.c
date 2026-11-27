#include<stdio.h>
int main()
{
	int x[17]={23,45,18,23,17,45,36,23,45,18,36,45,18,17,36,23,17};
	int y[17];
	int i,j,k=0,count=0,isRepeat=0;
	for(i=0;i<17;i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n\n");
	y[0]=0;
	for(i=0;i<17;i++)
	{
		isRepeat=0;
		for(k=0;k<count;k++)
			{
				if(x[i]==y[k])
				isRepeat=1;
				else
				isRepeat=0;
			}
			if(isRepeat==0)
			{ 
		for(j=i+1;j<17;j++)
		{
			if(x[i]==x[j])
			{
				y[i]=x[i];
				count++;
				break;
			}
		   }
		}
	 }
	for(i=0;i<count;i++)
	printf("%d ",y[i]);
}
