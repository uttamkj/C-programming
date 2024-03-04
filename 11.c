//4 to diagonal 2 to others
#include<stdio.h>
void main()
{
	int i,j,row,temp,column,matx[50][50],sum=0,product=1;
	printf("enter number of row and column");
	scanf("%d%d",&row,&column);
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("enter a number for %d row and %d column",i+1,j+1);
			scanf("%d",&matx[i][j]);
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			if(i==j)
			{
				matx[i][j]+=4;
			}
			else
			{
				matx[i][j]-=2;
			}	
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("%d ",matx[i][j]);
		}
		printf("\n");
	}
}
