// accept the string 
#include<stdio.h>
#include<string.h>
void main(){
	char str[21];
	printf("enter a string:");
	//scanf("%s",str);
	scanf("%[^\n]s",str);
	printf("%s",str);
}
