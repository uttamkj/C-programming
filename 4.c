// replace space
#include<stdio.h>
int main(){
	char str[51];
	int i;
	printf("enter a string:");
	scanf("%[^\n]s",str);
	for(i=0; str[i]!='\0'; i++){
		if(str[i]==' '){
			str[i]='#';
		}
	}
	printf("string is:%s",str);
}
