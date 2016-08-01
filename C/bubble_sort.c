//Created by Aman Dwivedi
//Bubble Sort Algorithm

#include<stdio.h>

void main()
{
	int i, j, temp, array[10];
	
	printf("Enter ten numbers to bubble sort\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &array[i]);
	}
	
	for(j=0; j<10; j++)
	{
		for(i=0; i<10; i++)
		{
			if(array[i]>array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}	
	
	printf("The bubble sorted elements are:\n");
	for(i=1; i<=10; i++)
	{
		printf("%d ", array[i]);
	}
	
}
