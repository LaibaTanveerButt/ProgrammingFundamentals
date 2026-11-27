#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	srand(time(0));
	int marks;
	marks=rand()%99+1;
	printf("marks are:%d\n",marks);
	if(marks>=85)
	printf("A");
	else if(marks>=80)
	printf("A-");
	else if(marks>=75)
	printf("B+");
	else if(marks>=70)
	printf("B");
	else if(marks>=65)
	printf("B-");
	else if(marks>=61)
	printf("C+");
	else if(marks>=58)
	printf("C");
	else if(marks>=55)
	printf("C-");
    else
    printf("D");
	}
