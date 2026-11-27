#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	srand(time(0));
	int i,num,sum=0;
	for(i=0;sum<50;i++)
	{
		num=rand()%10+1;
		sum+=num;
		printf("%d\t",num);
		if(sum==50)
		break;
	}
	printf("sum is :%d",sum);
	if(sum>50)
	{
		sum=0;
		int num;
		for(i=0;i<10;i++)
     	{
		num=rand()%10+1;
		sum+=num;
		printf("%d\t",num);
		if(sum==50)
		break;
	    }
	}
	printf("sum is :%d",sum);
}
