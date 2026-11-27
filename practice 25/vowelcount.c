#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	char s[15];
	int i,countv=0,countco=0;
	printf("enter string:");
	scanf("%[^\n]%*c",s);
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
		countv++;
		else
		countco++;
	}
	printf("number of vowels are:%d \nnumber of consonants are:%d",countv,countco);
	return 0;
}
	
