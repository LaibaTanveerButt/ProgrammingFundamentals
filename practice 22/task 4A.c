#include<stdio.h>
int isRepeated(int x[],int i)
{
	int temp;
	for(i--; i>=0; i--)
	{
		temp=x[i];
		if(x[i]==temp)
		return i;
	return -1;
	}
}
void show(int x[])
{
	int i;
	for(i=0;i<17;i++)
	printf("%d ",x[i]);
	printf("\n");
}
int main()
{
	int x[17]={23,45,18,23,17,45,36,23,45,18,36,45,18,17,36,23,17};
	int i,j;
	show(x);
	for(i=0;i<17;i++)
	 if(isRepeated==i)
	 printf("%d ",x[i]);
}
