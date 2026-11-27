#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int x,y,z,i;
	x=rand()%9+1;
	y=rand()%9+1;
	z=rand()%9+1;
	printf("%d %d %d\n",x,y,z);
	for(i=1;i<3;i++)
	{
	  if(x==y)
	  {
	  y=rand()%9+1;	
	  i--;
      }
      else if(y==z)
      {
      	z=rand()%9+1;
      	i--;
	  }
	  else if(x==z)
      {
      	z=rand()%9+1;
      	i--;
	  }
	  else
	  {
	  printf("numbers are:\t%d\t%d\t%d\n",x,y,z);
	  break;
      }
	}
}
