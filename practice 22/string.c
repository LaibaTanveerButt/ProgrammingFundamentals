#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	int i,count=0;
	char s[15],cs[15];
	printf("enter a string:");
	scanf("%[^\n]%*c",s);
	printf("%s",s);
	for(;s!=0;)
	count++;
	printf("\nnumber of characters are:%d",count);
	for(i=0;s[i]!=0;i++)
	cs[i]=s[i];
	printf("\ncopied string is:%s",cs);
	return 0;
}
