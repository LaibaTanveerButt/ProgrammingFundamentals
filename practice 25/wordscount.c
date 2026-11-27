#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	char s[15];
	int i,count=0;
	printf("enter string:");
	scanf("%[^\n]%*c",s);
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==' ')
		count++;
	}
	printf("number of words are:%d",count+1);
}
