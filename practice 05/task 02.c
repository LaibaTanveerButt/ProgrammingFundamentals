#include<stdio.h>
int main()
{
	int r;
	float v;
	printf("enter radius:");
	scanf("%d",&r);
	v=(4.0*3.142*r*r*r)/3;
	printf("volume is :%f",v);
}
