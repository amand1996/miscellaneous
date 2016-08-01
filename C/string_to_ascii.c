#include<stdio.h>
#include<string.h>
void main()
{char str[80];
int l, i, j;
printf("\nEnter the value of a string\n");
gets(str);
l=strlen(str);
for(i=0;i<l ; i++)
{ j=str[i];
printf("\nThe ASCII value of %c is %d\n", str[i], j);
}
}
