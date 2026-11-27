#include<stdio.h>
int main()
{
	FILE *fp=fopen("practice1.txt","w");
	int i,j;
	int x[7][5]={{30,0,0,0,0},{40,0,0,0,0},{25,78,36,64,0},{13,0,0,0,0},{66,79,58,0,0},{23,26,27,48,81},{75}};
    for(i=0;i<7;i++)
    {
      for(j=0;j<4;j++)
      if(x[i][j]!=0)
      {
      	fprintf(fp,"%d ",x[i][j]);
      	printf("%d ",x[i][j]);
	  }
      fprintf(fp,"\n");
    }
	fclose(fp);
}
