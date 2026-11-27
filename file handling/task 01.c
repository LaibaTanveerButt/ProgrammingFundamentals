#include<stdio.h>
int main()
{
	FILE *fp=fopen("myfazool.txt","w");
	fprintf(fp,"this is a fazool file");
	fclose(fp);
}
