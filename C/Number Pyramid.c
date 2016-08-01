#include<stdio.h>
void main()
{
	int i, j, k=1, n, p;
	printf("Enter the number of rows\n");
	scanf("%d", &n);
	for(i=0; i< n+1; i++)
	{
		j=0;
		while(j<=n-i+1)
		{
			printf(" ");
			j++;
		}
		for(p=0; p<i; p++)
		{
			printf("%d ", k);
			k++;
		}
		printf("\n");
	}
}
