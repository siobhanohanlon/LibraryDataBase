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
void initArray();

void main()
{
	int* bookArray;
	libraryB* bArray;
	int numB;

	//Enter Size of Array
	printf("Please Enter amount of Books to be enetered: ");
	scanf("%d", &numB);

	//SetUp Array
	bookArray = (int*)malloc(numB * sizeof(int));
	bArray = (libraryB*)malloc(numB * sizeof(libraryB));

}

//Initialise Array
void initArray()
{
	for (int i = 0; i < )
	{

	}
}