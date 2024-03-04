// count occurrence
#include<stdio.h>
void main()
{
	int arr[]={1,1,1,2,3,4,5,6,7},i,j,c,temp;
	for(i=0; i<9; i++)
	{
		if(temp==arr[i])
			continue;
		else
		{
			temp=arr[i],c=0;
			for(j=0; j<9; ++j)
			{	
				if(arr[j]==temp)
					c++;
			}
			printf("%d=%d\n",arr[i],c);
		}
	}
}

