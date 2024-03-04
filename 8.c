
// transpose
#include<stdio.h>
void main()
{
	int i,j,row,temp,column,matx[50][50],matx1[50][50],c;
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
			matx1[i][j]=matx[j][i];	
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			if(matx[i][j]==matx1[i][j])
				c=1;
			else
			{
				c=0;
				break;
			}

		}
	}
	if(c)
		printf("symmetrical\n");
	else
		printf("not symmetrical\n");

	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("%d ",matx1[i][j]);
		}
		printf("\n");
	}
}
