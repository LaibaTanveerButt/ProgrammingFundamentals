#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void character(char c,int count)
{
	int i=1;
	for(i=1;i<=count;i++)
	printf("%c ",c);
}
int main()
{
	char ch='8';
	character(ch,20);
}	
