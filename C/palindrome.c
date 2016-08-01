#include<stdio.h>
#include<string.h>
void main()
{
char str[80];
int i, l, count=0;
printf("\nEnter a string\n");
gets(str);
l=strlen(str);
if(l%2==0)
{
{for(i=0; i<l/2; i++)
	{if(str[i]==str[l-1-i])
		{count=count+1;}
	}
}
if(count==l/2)
	{printf("\nThe string is a Palindrome\n");}
else
{printf("\nThe string is not a Palindrome\n");}
}
else
	{for(i=0; i<(l+1)/2; i++)
		{if(str[i]==str[l-i-1])
			{count=count+1;}
		}
if(count==(l+1)/2)
{printf("\The string is a Palindrome\n");}
else
{printf("\nThe string is not a Palindrome\n");}}

}
