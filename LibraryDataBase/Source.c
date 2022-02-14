#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
void displayArr(libraryB* bkArr, int size);
void add_Book(libraryB* bkArr, int size);
void menu();

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
		printf("Enter 1 to add a book or 0 to exit:\t");
		scanf("%d", &choice);

		if (choice == 1)
		{
			add_Book(bArray, numB);
		}
	} while (choice == 1);
	
	displayArr(bArray, numB);
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
		if ((*(bkArr + i)).bNum == 0)
		{
			printf("Please Enter Book Number: ");
			scanf("%ld", &(*(bkArr + i)).bNum);

			printf("Please Enter Book Title: ");
			scanf("%s", (*(bkArr + i)).bTitle);

			printf("Please Enter Book Author: ");
			scanf("%s", (*(bkArr + i)).bAuthor);

			printf("Please Enter Book Price: ");
			scanf("%d", &(*(bkArr + i)).bPrice);

			return;
		}
	}
}

//Display Array
void displayArr(libraryB* bkArr, int size)
{
	int findBk;

	//Ask for Book Number
	printf("\nEnter Book Number you want to display: ");
	scanf("%d", &findBk);

	for (int i = 0; i < size; i++)
	{
		if ((*(bkArr + i)).bNum == findBk)
		{
			printf("\n----------------------------------------------------------");
			printf("\nBook Number: %ld", (*(bkArr + i)).bNum);
			printf("\nTitle: %s", (*(bkArr + i)).bTitle);
			printf("\nAuthor: %s", (*(bkArr + i)).bAuthor);
			printf("\nPrice: %.2d", (*(bkArr + i)).bPrice);
			printf("\n----------------------------------------------------------");

			return;
		}
	}
}

//Menu
void menu()
{
	printf("Select 1. Search & Display Book  2. Add Book  3.Edit Book Price  \nExit ");
}