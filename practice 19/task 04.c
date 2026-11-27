#include<stdio.h>
int sum(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
	  s+=i;	
	}
    return s;
}
int main()
{
	int num;
	printf("enter numbers:");
	scanf("%d",&num);
	printf("sum is %d",sum(num));
}
