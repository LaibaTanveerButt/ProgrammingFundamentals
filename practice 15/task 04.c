#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int i,j,avg,mavg=0,havg=0,mset,hset,x,y,z,hx,hy,hz,mx,my,mz;
	for(i=1;i<=10;i++)
	{
		x=rand()%899+100;
		y=rand()%899+100;
		z=rand()%899+100;
		printf("%d\t%d\t%d",x,y,z);
		avg=(x+y+z)/3;
		printf("\tavg of set is:%d\n",avg);
		if(avg>=havg)
		{
			havg=avg;
			hset=i;
			hx=x,hy=y,hz=z;
		}
		if(mavg==0)
		{
			mavg=avg;
		}
		if(avg<mavg)
		{
			mavg=avg;
			mset=i;
			mx=x,my=y,mz=z;
		}
	}
	printf("\nset %d has highest avg and elements are:%d %d %d",hset,hx,hy,hz);
	printf("\nset %d has minimum avg and elements are:%d %d %d",mset,mx,my,mz);	
	}
