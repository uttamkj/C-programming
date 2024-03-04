//book info using structure
#include<stdio.h>
struct books
{
	char title[30];
	char author[40];
	float price;
};
void main()
{
	struct books b[3],max,min;
	int i;
	printf("\n\tDetails of the books: \n");
	for(i=0; i<3; i++)
	{
		printf("\nEnter details for book %d: \n",i+1);
		printf("\nTitle: ");
		scanf(" %[^\n]s",b[i].title);
		printf("\nAuthor: ");
		scanf(" %[^\n]s",b[i].author);
		printf("\nPrice: ");
		scanf(" %f",&b[i].price);
	}
	max = b[0];
	min = b[0];
	// max value book and min value book 
	for(i=0; i<3; i++)
	{
		if(b[i].price>max.price)
			max=b[i];
	}
	for(i=0; i<3; i++)
	{
		if(b[i].price<min.price)
			min=b[i];
	
	}

	//display
	printf("\tDetails of most expensive book: \n\n");
	printf("Name: %s\n",max.title);
	printf("Author: %s\n",max.author);
	printf("Price: %f\n",max.price);


	printf("\n\tDetails of least expensive book: \n\n");
    printf("Name: %s\n",min.title);
    printf("Author: %s\n",min.author);
    printf("Price: %f\n\n",min.price);
}


