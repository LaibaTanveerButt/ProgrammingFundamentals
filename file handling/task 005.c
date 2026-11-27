#include<stdio.h>
int main()
{
	FILE *fp=fopen("practice1.txt","r");
	FILE *fp1=fopen("even.txt","w");
	int i,c;
	for(i=0;i<15;i++)
	{
		fscanf(fp,"%d",&c);
		if(c!=0)
		{
		   if(c%2==0)
		   {
		     fprintf(fp1,"%d ",c);
		     printf("%d ",c);
	       }
        }
	}
	printf("\n");
	fclose(fp);
	fclose(fp1);
	fp=fopen("practice1.txt","r");
	FILE *fp2=fopen("odd.txt","w");
	for(i=0;i<15;i++)
	{
		fscanf(fp,"%d",&c);
		if(c!=0)
		{
		  if(c%2!=0)
		   {
	      	fprintf(fp2,"%d ",c);
		     printf("%d ",c);
     	    }
     	}
    }
	fclose(fp);
	fclose(fp2);
}
