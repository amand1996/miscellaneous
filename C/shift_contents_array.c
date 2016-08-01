//Created by Aman Dwivedi

#include <stdio.h>
void main()
{
	int array[10], num, i, new_array[10];
	
	//scanning the elements of array
	printf("Enter ten elements for array\n");
	for (i=0; i<10; i++)
	{
		scanf("%d", &array[i]);
	}
	
	//Enter the nth term (from the last) after which all elements need to be shifted
	printf("Enter the number of terms from last which are to be shifted upwards\n");
	scanf("%d", &num);
	
	//Formation of new array
	for (i=0; i<10; i++)
	{	//shifting the last n elements to up
		if (i<num)
		{
			new_array[i]=array[10-num+i];
		}
		
		//putting other elements below the above elements
		else
		{
			new_array[i]=array[i-num];
		}
	}
	
	//print the new array
	for (i=0; i<10; i++)
	{
		printf("%d\t ", new_array[i]);
	}
}
