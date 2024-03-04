#include<stdio.h>
// void main(){
//     int a = 8;
//     if(a == 7);{
//         printf("Hello \n");
//     }
    
// }
void main(){
    int n ,i,j, bin[4];
    printf("Enter the decimsl number: ");
    scanf("%d",&n);
    i=0;
    while(n>0){
        bin[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",bin[j]);
    }
    

}