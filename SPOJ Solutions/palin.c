#include<stdio.h>
int main()
{
	int a, t, j, b, count, l;
	scanf("%d", &t);
	while(t>0)
	{
		scanf("%d", &a);
		if(a<=1000000 && a>0)
		{
		if(a==9)
		{printf("11\n");}
		else
		{a=a+1;
		z:
		count=0;
		l=0;
		b=a;
		while(b>0)
		{
			b=b/10;
			l++;
		}
		int c[l];
		b=a;
		j=0;
		while(b>0)
		{
			c[j]=b%10;
			b=b/10;
			j++;
		}
		
		for(j=0; j<l/2; j++)
		{
			if(c[j]==c[l-j-1])
			{
				count++;
			}
		}
		if(count==l/2)
		{printf("%d\n", a);}
		else
		{a++;
		goto z;}
		
	}}
	t--;}
	return 0;
}
