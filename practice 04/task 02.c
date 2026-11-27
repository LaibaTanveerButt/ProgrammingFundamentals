#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int x,n;
	x=rand()%9+1;
	printf("enter number:");
	scanf("%d",&n);
	if(n!=x)
	{
		printf("enter number again:");
		scanf("%d",&n);
	}
		if(n!=x)
		{
		printf("enter number again:");
		scanf("%d",&n);
		}
	if(n==x)
	printf("you winner");
	else
	printf("you loser the number is %d",x);
}

