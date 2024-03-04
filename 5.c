// split a string 
#include<stdio.h>
#include<string.h>
void main(){
	char str[51],str1[51],str2[51];
	int i,j,c;
	printf("enter a string:");
	scanf("%[^\n]s",str);
	for(i=0; str[i]!='\0'; i++){
		printf("%c",str[i]);
		str1[i]=str[i];
		if(str[i]==' '){
			for(j=i+1; str[j]!='\0'; j++){
				printf("\n%c",str[i]);
				break;
		}
		}
	}
	printf("\n\n%s",str1);
}
