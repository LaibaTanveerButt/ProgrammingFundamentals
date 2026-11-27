#include<stdio.h>
int main()
{
	FILE *fp=fopen("practice1.txt","r");
	FILE *fp1=fopen("practice2.txt","w");
	int i,j,a,sum=0;
	for(i=0;i<15;i++)
	{
		fscanf(fp,"%d",&a);
			if(a!=0)
			{	
		    fprintf(fp1,"%d ",a);	
	     	}
    }
    fclose(fp);
    fclose(fp1);
}
