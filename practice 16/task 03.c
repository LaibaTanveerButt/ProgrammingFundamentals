#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int i=0,j=0,r,c;
	char ch='A';
	printf("enter rows:");
	scanf("%d",&r);
	while(i<r)
	{
		ch='A';
		while(ch<='Z')
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
		i++;
	}
}
	
