#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int i=1,j=1,r,c;
	int x;
	printf("enter rows:");
	scanf("%d",&r);
	printf("enter columns:");
	scanf("%d",&c);
	
	while(i<=r)
	{
		j=i;
		while(j<=c)
		{
			printf("%d\t",j);
			j++;
		}
		printf("\n");
		c++;
		i++;
	}
}
