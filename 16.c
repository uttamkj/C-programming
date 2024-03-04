//merge 2 sorted array
#include<stdio.h>
void printArray(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d,",arr[i]);
    }
}
void sortarray(int arr[],int len){
    int i,j,temp;
    for(j=0; j<len; j++)
    {
    for(i=0; i<len-1; i++)
    {
        if(arr[i]<arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }
    printArray(arr,len);
}
int main()
{
    int arr2[20],arr[]={10,9,8,7,6,5,4,3,2,1},arr1[]={20,19,18,17,16,15,14,13,12,11},i,j;
    for(i=0; i<10; i++)
    {
        arr2[i]=arr[i];
        arr2[i+10]=arr1[i];
    }
    sortarray(arr2,20 );
    
}