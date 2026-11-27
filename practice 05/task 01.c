#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float d;
	printf("enter x1:");
	scanf("%d",&x1);
	printf("enter x2:");
	scanf("%d",&x2);
	printf("enter y1:");
	scanf("%d",&y1);
	printf("enter y2:");
	scanf("%d",&y2);
	d=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	d=sqrt(d);
	printf("distance is:%.2f",d*1.0);
	
}
