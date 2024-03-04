//  vowel to upper case
#include<stdio.h>
#include<string.h>
void main(){
	char str[21];
	int i,c;
	printf("enter a string:");
	scanf("%s",str);
	for(i=0; str[i]!='\0'; i++){
		c=str[i];
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
			str[i]-=32;
		}
	}
	printf("%s",str);

}
