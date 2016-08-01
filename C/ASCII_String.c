#include<stdio.h>
int main()
{char str[100];
int i=0;
printf("Enter any string:");
scanf("%s", str);
printf("ASCII values of each characters of given string:");
while(str[i])
{printf("%d\n", str[i++]);
}
return 0;}
