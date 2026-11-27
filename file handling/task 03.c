#include<stdio.h>
int main()
{
	FILE *fp=fopen("practice1.txt","r");
	
	int i,j,a,sum=0;
	for(i=0;i<15;i++)
	{
		fscanf(fp,"%d",&a);
			if(a!=0)
			{
			sum+=a;		
		    printf("%d ",a);	
	     	}
    }
    printf("\nsum:  %d",sum);
    fclose(fp);
}
