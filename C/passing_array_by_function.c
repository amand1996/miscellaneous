//Created by Aman Dwivedi

#include <stdio.h>
int m, n;
int summation (int number[][3], int m, int n);  //protype declaration

void main()
{
	int i, j, sum, num[3][3];
	printf("Enter the values of the 2D Array\n");
	
	//Scanning of elements
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}
	
	//Passing the 2D array to the function
	summation(num, 3, 3);
	
	

}

//Function starts from here
int summation (int number[][3], int m, int n )
{
	int sum1 = 0, i=0, j=0;
	
	//Sum of elements
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum1 = sum1 + number[i][j];
		}
	}
	
	//Print the sum of the elements
	printf("The sum of elements is %d\n", sum1);
}
