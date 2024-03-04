// print amd sum diagonal
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
				sum+=matx[i][j];
				printf("%d ",matx[i][j]);
			}

		}
	}
	printf("\nsum of diagonal element %d\n",sum);

	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("%d ",matx[i][j]);
		}
		printf("\n");
	}
}
