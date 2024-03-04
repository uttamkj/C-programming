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

	//printing  array elements 
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d \t",arr[i][j]);
		}
		printf("\n\n");
	}
}

