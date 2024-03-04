// read and display 2d array
#include<stdio.h>
void main()
{
	int arr1[21][21], arr2[21][21];
	int row , col , i , j ,flag=1;
	printf("Enter the size of row and col : ");
	scanf("%d%d",&row,&col);

	printf("Enter the elements of first  array : ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}

	printf("Enter the elements of second  array : ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	//printing  array elements 
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if (arr1[i][j]!=arr2[i][j])
				flag=0;
		}
	}
	 if (flag == 0){
		 printf("two matrix are not identical\n");
		 }
	 else 
		 printf("Two matrix are identical \n");
}

