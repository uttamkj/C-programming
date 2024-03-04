#include<stdio.h>
void del(int arr[],int len,int tar)
{
    int i,j,temp;
    for(i=0; i<len; i++)
    {
        if(arr[i]==tar)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }
    }
}
void printArray(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d,",arr[i]);
    }
}

int main()
{
    int arr[]={1,2,3,4,5},p,t;
    printf("enter number of position to delete:");
    scanf("%d",&p);
    t=arr[p-1];
    del(arr,5,t);
    printArray(arr,4);
}