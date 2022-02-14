#include <stdio.h>
#include <stdlib.h>

//Struct
typedef struct
{
	long bNum;
	char bTitle[30];
	char bAuthor[25];
	double bPrice;
}libraryB;

//Declare Funstions
void initArray(libraryB* bkArr, int size);

void main()
{
	int* bookArray;
	libraryB* bArray;
	int numB, choice;

	//Enter Size of Array
	printf("Please Enter amount of Books to be enetered: ");
	scanf("%d", &numB);

	//SetUp Array
	bookArray = (int*)malloc(numB * sizeof(int));
	bArray = (libraryB*)malloc(numB * sizeof(libraryB));

	initArray(bArray, numB);

	do
	{
		printf("Enter 1 to add a book or 0 to exit");
		scanf("%d", &choice);

		if (choice == 1)
		{
			add_Book(bArray, numB);
		}
	} while (choice = 1);
	
}

//Initialise Array
void initArray(libraryB* bkArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		(*(bkArr + i)).bNum = 0;
	}
}


//Set Array
void add_Book(libraryB* bkArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Please Enter Book Number: ");
		scanf("%ld", &(*(bkArr + i)).bNum);

		printf("Please Enter Book Title: ");
		scanf("%s", (*(bkArr + i)).bTitle);

		printf("Please Enter Book Author: ");
		scanf("%s", (*(bkArr + i)).bAuthor);

		printf("Please Enter Book Price: ");
		scanf("%d", &(*(bkArr + i)).bPrice);
	}
}