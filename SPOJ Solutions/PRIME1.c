//SPOJ PRIME1
void sieve(int m, int n);
#include<stdio.h>
#include<math.h>
int main()
{
	int t, i;
	long int m, n, j, k, count;
	scanf("%d", &t);
	if(t<=10)
	{
		for(i=0; i<t; i++)
		{
			scanf("%ld %ld", &m, &n);
			if(m>=1 && m<=n && n<=1000000000 && n-m<=100000)
			{
				sieve(m,n);
			}
		}
	}
	return 0;
}

void sieve(int m, int n)
{
	int a[n], j, i;
	
	for(i=0; i<n; i++)
	{
		a[i]=i+1;
	}

	for(j=2; j<=sqrt(n); j++)
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
		if(a[i]!=0 && a[i]>=m)
		{
			printf("%d\n", a[i]);
		}
	}
}
