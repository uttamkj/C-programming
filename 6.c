// print duplicate
#include<stdio.h>
#include<string.h>
int main(){
	char str[51];
	int i,j,k,c;
	printf("enter a word:");
	scanf("%s",str);
	for(i=0; str[i]!='\0'; i++){
		for(j=i+1; str[j]!='\0'; j++){
			if(str[i]==str[j]){
				for(k=j; str[k]; k++){
					str[k]=str[k+1];
					j--;
					c++;
				}
				if(c>0){
					printf("%c\n",str[i]);
				}
			}
		}
	}
	printf("\n%s",str);
}

