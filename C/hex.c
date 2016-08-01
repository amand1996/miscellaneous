//Decimal to hexadecimal conversion

#include<stdio.h>
void main()
{
	int a;
	scanf("%d", &a);
	int l=1; int c=a;
	while(c>=16)
	{
		c=c/16;
		l++;
	}
	
	int b[l];
	int i=0;
	while(a>=16)
	{
		b[i]=a%16;
		a=a/16;
		i++;
	}
	b[i]=a;
	
	i=l-1;
	while(i>=0)
	{
		if(b[i]<=9)
		{printf("%d", b[i]);}
		else
		{
			int x=b[i]-10;
			char d='A'+ x;
			printf("%c", d);}
			i--;			
	}
	printf("\n");
}
