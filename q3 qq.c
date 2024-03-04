#include<stdio.h>
struct STUDENT 
{
	int rollno;
	char name[31];
	int marks[3];
};
void main()
{
	struct STUDENT std[50];
	int n,i,j;
	printf(" Enter the number of student: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter your roll no: ");
		scanf("%d",&std[i].rollno);
		printf("Enter your name: ");
		scanf(" %[^\n]s",std[i].name);
		for(j=0;j<3;j++)
		{
			printf("Enter your mark in subject %d: ",j+1);
			scanf("%d",&std[i].marks[j]);
		}
	}
	

	//printing of the elements 

	for(i=0;i<n;i++){
		printf(" roll no: %d\n",std[i].rollno);
		printf(" name: %s\n ",std[i].name);
		for(j=0;j<3;j++)
		{
			printf(" marks in subject %d is %d \n",j+1,std[i].marks[j]);
		}
	}
	


}

