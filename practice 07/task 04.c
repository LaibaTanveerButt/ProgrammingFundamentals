#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int mar1,mar2;
	mar1=rand()%99+1;
	mar2=rand()%99+1;
	printf("marks are :%d %d\n",mar1,mar2);
	if(mar1==mar2)
	printf("marks are equal");
	else if(mar1>=85 && mar2>=85)
		printf("marks are almost equal");
	else if(mar1>=80 && mar1<85)
	{
		if(mar2>=80 && mar2<85)
		printf("marks are almost equal");
		else
		printf("marks are not equal");
	}
	else if(mar1>=75 && mar1<80)
	{
		if(mar2>=75 && mar2<80)
		printf("marks are almost equal");
		else
		printf("marks are not equal");
	}
	else if(mar1>=70 && mar1<75)
	{
		if(mar2>=70 && mar2<75)
		printf("marks are almost equal");
		else
		printf("marks are not equal");
	}
	else if(mar1>=65 && mar1<70)
	{
		if(mar2>=65 && mar2<70)
		printf("marks are almost equal");
		else
		printf("marks are not equal");
	}
	else if(mar1>=61 && mar1<65)
	{
		if(mar2>=61 && mar2<65)
		printf("marks are almost equal");
		else
		printf("marks are not equal");
	}
	else if(mar1>=55 && mar1<61)
	{
		if(mar2>=55 && mar2<61)
		printf("marks are almost equal");
		else
		printf("marks are not equal");
	}
	else if(mar1>=50 && mar1<55)
	{
		if(mar2>=50 && mar2<55)
		printf("marks are almost equal");
		else
		printf("marks are not equal");
	}
	else
	printf("marks are not equal");
}
	

