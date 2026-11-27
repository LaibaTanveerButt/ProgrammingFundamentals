#include<stdio.h>
int main()
{
	int sec,rem_sec,hr,min;
	printf("enter seconds:");
	scanf("%d",&sec);
	hr=sec/3600;
	rem_sec=sec-hr*3600;
	min=rem_sec/60;
	rem_sec=rem_sec-min*60;
	printf(" hours:%d \n minutes:%d \n seconds:%d \n",hr,min,rem_sec);
}
