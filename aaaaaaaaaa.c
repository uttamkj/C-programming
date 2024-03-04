//to print the amstrong numbers between 1 to n
#include<stdio.h>
#include<math.h>
void main()
{
	int n, i, rem, sum=0, temp,dig;
	printf("Enter a number till which you want to print amstrong num: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		//count the digit
		temp=i;
		while(temp!=0)
		{
			temp/=10;
			dig++;
		}
		temp=i;
		sum=0;
		while(temp)
		{
			rem=temp%10;
			sum=sum+pow(rem,dig);
			temp/=10;
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
}
