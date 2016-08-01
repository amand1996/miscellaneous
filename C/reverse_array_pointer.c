//Created by Aman Dwivedi

//Reverse array using pointers
#include<stdio.h>
int n=10;													//Global declaration of n
int func(int n, int* p);									//Prototype Declaration
void main()
{
	int array[10], i;
	
	//Scanning of elements of array
	printf("Enter the 10 elements of array:\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &array[i]);
	}
	
	//Function call
	func(10, &array);
}

//Function
int func(int n, int* p)
{
	int new_array[10], i;
	
	//Formation of new array
	for (i=0; i<10; i++)
	{
		new_array[10-i-1]=*(p+i);
	}
	
	//Printing of the new reversed array
	printf("The reversed array is:\n");
	for(i=0; i<10; i++)
	{
		printf("%d\n", new_array[i]);
	}
}
