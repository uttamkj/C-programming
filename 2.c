//count number of character number special charcter in a string
#include<stdio.h>
void main(){
	char str[51];
	int i,s=0,d=0,c=0;
	printf("enter a string:");
	scanf("%s",str);
	for(i=0; str[i]; i++){
		if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
			c++;
		else if(str[i]>=0 && str[i]<=9)
			d++;
		else
			s++;
	}
	printf("number of digit in the stirng is %d\n",d);
	printf("number of character in the stirng is %d\n",c);
	printf("number of special character in the stirng is %d\n",s);
}
