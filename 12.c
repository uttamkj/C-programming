//find ave value of 5 number
#include<stdio.h>
int add_avg(int ar[],int *p);
void main(){
	int sum,arr[5],*ptr=arr;
	printf("enter  5 number:");
	for(ptr=arr; ptr<arr+5; ptr++){
		scanf("%d",ptr);
	}
	sum=add_avg(arr,ptr);
	printf("sum=%d",sum);
}
int add_avg(int arr[],int *ptr){
	int sum=0;
	for(ptr=arr; ptr<arr+5; ptr++){
		sum += *ptr;
	}
	return sum;
}
	
