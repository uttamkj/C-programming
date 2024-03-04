#include<stdio.h>
#include<stdbool.h>
int sumofdigit(int num)
{
    int sum =0;
    while(num>0)
    {
        sum = sum + (num%10);
        num = num/10;
    }
    
    return sum;
}
void reform(char str[])
{
    int i ;
    for(i = 0; str[i]!='\0';i++){
        if( str[i]>=65 && str[i] <= 90  ){
            str[i] = str[i] + 32 ;
        }
        else if (str[i]>=97 && str[i] <= 122)
         str[i] = str[i] - 32 ;
    }

}
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not a prime number
    }

    for (int i = 2; i * i <= num; i++) {   //16
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }

    return 1;  // Prime number
}

int main()
{
    // int i , n;
    // printf("Enter number: ");
    // scanf("%d",&n);
    // i = sumofdigit(n);
    // printf("%d",i);
    // char str[20],new[20];
    // printf("Enter a string: ");
    // scanf("%[^\n]s",str);
    // reform(str);
    // printf("%s",str);
}