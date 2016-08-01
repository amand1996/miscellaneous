//Algorithm for Sieve of Eratosthene

#include<stdio.h>
#include<math.h>
main()
{
	int n;
	scanf("%d", &n);
	int a[n], j, i;
	
	for(i=0; i<n; i++)
	{
		a[i]=i+1;
	}

	
	for(j=2; j<=n; j++)
	{
		for(i=0; i<n;i++)
		{
			
			
			if(a[i]%j==0 && a[i]!=j)
			{
				a[i]=0;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		if(a[i]!=0)
		{
			printf("%d\n", a[i]);
		}
	}
	return 0;
}
