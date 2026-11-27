#include<stdio.h>
int middleNum(int n1,int n2,int n3)
{
	if(n1<n2 && n2<n3)
	return n2;
	else if(n2<n1 && n1<n3)
	return n1;
	else 
	return n3;
}
int main()
{
	int a,b,c;
	printf("enter A:");
	scanf("%d",&a);
	printf("enter B:");
	scanf("%d",&b);
	printf("enter C:");
	scanf("%d",&c);
	printf("%d",middleNum(a,b,c));
}
