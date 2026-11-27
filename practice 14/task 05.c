#include<stdio.h>
int main()
{
	int i,n1,n2,sum=0;
	printf("enter n1:");
	scanf("%d",&n1);
	printf("enter n2:");
	scanf("%d",&n2);
	if(n1<n2)
	{
		for(i=n1;i<=n2;i++)
		{
		printf("%d ",i);
		sum+=i;
	    }
	}
	else
	{
		for(i=n2;i<=n1;i++)
		{
		printf("%d ",i);
		sum+=i;
	    }
	}
	printf("\nsum is :%d\n",sum);
}

