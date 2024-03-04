// read and display 2d array
#include<stdio.h>
int main()
{
	int row , col , i , j,sum=0,pro=1 ;	
	int arr[21][21];
	printf("Enter the size of row and col : ");
	scanf("%d%d",&row,&col);
	//reading elements from user...
	printf("Enter the elements of array : ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	// calculation 
	//sum

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum+=arr[i][j];
		}
	}
	printf("sum is = %d",sum);

	//product

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			pro=pro*arr[i][j];
		}
	}
	printf("product is =%d",pro);
return 0;
}
