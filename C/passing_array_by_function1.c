#include <stdio.h>
 void sum1 (int* p);
 
 void main()
 {
 	int a[3][3], i, j;
 	for (i = 0; i < 3; i++)
 	{
 		for (j = 0; j <3; j++)
 		{
 			scanf("%d", &a[i][j]);
 		}
 	}
 sum1(&a[0][0]);
 }
 
 void sum1(int* p)
 {
 	int sum = 0, k, l;
 	for (k = 0; k < 3; k++)
 	{
 		for(l = 0; l < 3; l++)
 		{
 		sum = sum +*(p+k*3 + l);
 		}
 	}
 printf("%d", sum);
 }
