#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	char s1[15],s2[15],s3[30];
	int i,j,k,count1=0,count2=0;
	printf("enter string:");
	scanf("%[^\n]%*c",s1);
	printf("enter string:");
	scanf("%[^\n]%*c",s2);
	for(i=0;s1[i]!=0;i++)
	count1++;
	for(i=0;s2[i]!=0;i++)
	count2++;
	for(i=count2,k=0;s2[i]>=0;i--,k++)
	s3[k]=s2[i];
	for(j=i,k=count1;s1[k]>=0;k--,j++)
	s3[j]=s1[k];
	printf("\n%s",s3);
	return 0;
}
