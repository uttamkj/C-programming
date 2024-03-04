// read and display 2d array
#include<stdio.h>
void main()
{
	int arr[21][21];
	int row , col , i , j ;
	printf("Enter the size of row and col : ");
	scanf("%d%d",&row,&col);

	printf("Enter the elements of array : ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	//calculation   array elements 
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if (arr[i][j] % 2 ==0)
			{
				arr[i][j]='E';
			}
			else 
				arr[i][j]='O';
			
		}
		
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %c  ",arr[i][j]);
		}
		printf("\n\n");
	}



}


