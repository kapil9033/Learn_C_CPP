#include <stdio.h>
#include <string.h>


struct Book
{
 char name[20];
 float price;
 int pages;
};


int main( )
{
	struct Book Book2;
	struct Book Book1={"Harry Potter", 99.99, 1000};

	strcpy(Book2.name,"Lord of the Rings");
	Book2.price=45.89;
	Book2.pages=900;

	printf("First Book name=%s with price %f has %d pages\n",Book1.name,Book1.price,Book1.pages);
	printf("First Book name=%s with price %f has %d pages\n",Book2.name,Book2.price,Book2.pages);
	printf("Memory Location of First Book name=%u with price %u has %u pages\n",&Book2.name,&Book2.price,&Book2.pages);
 return 0;
}
