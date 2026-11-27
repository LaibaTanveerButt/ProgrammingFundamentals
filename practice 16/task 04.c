#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int i=0,j=0,r,c;
	int x;
	printf("enter rows:");
	scanf("%d",&r);
	printf("enter columns:");
	scanf("%d",&c);
	while(i<r)
	{
		j=0;
		while(j<c)
		{
		x=rand()%89+10;
		printf("%d\t",x);
		j++;
		}
		printf("\n");
		i++;
	}
}
