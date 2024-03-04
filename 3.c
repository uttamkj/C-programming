//count number of character word blank spaces in string
#include<stdio.h>
#include<string.h>
int main(){
	char str[51];
	int i, j, k,s,c,w;
	printf("enter a string");
	scanf("%[^\n]s",str);
	for(i=0; str[i]; i++){
		c++;
		if(str[i]==' ')
			s++;
		else if(str[i]==' ' && str[i-1]!=' ')
			w++;
	}
	printf("space=%d\ncharacter=%d\nword=%d\n",s,c,w);
}
