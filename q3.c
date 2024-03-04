// sum of each row of matrix
#include<stdio.h>
void main()
{
	int arr[21][21];
	int row , col , i , j ,sum;
	printf("Enter the size of row and col : ");
	scanf("%d%d",&row,&col);
// taking input from user 
	printf("Enter the elements of array : ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	//printing of each row
	for(i=0;i<row;i++)
	{
		sum =0;
		for(j=0;j<col;j++)
		{
		  sum = sum + arr[i][j];
		}
		printf("the sum of %d row = %d \n",i,sum);
	}
	// sum of each row 



}

