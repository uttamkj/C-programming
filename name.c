#include<stdio.h>
#include<string.h>
void main(){
    char name[41],n_name[31]="\0",temp[21]="\0",temp2[31]="\0";
    int i,k=0,n;
    printf("name:");
    scanf("%[^\n]s",name); // uttam kume jena
    n=strlen(name);
    n_name[0]=toupper(name[0]); // U.K Jena
    for(i=0; i<n; i++){
        if(name[i]!=' '){
            temp[k]=(name[i+1]);
            k++;
        }
        else{
            k=0;
            temp2[k]=toupper(name[i+1]);
            strcat(n_name,".");
            strcat(n_name,temp2);
        }
    }
    strcat(n_name,temp);
    printf("%s",n_name);
}