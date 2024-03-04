#include<stdio.h>
void printArray(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\b");
}
int main()
{
    int arr[]={1,2,3,4,5},i,j,temp;
    for(i=0; i<4; i++)
    {
        if(i%2==0)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    printArray(arr,5);
}