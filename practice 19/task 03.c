#include<stdio.h>
void counting(int n,int d)
{
	int i,j=1;
	for(i=1,j=i;i<=n;i++,j+=d)
	printf("%d ",j);
}
int main()
{
	int num,dis;
	printf("enter numbers:");
	scanf("%d",&num);
	printf("enter distance:");
	scanf("%d",&dis);
	counting(num,dis);
}
