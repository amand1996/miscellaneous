#include<stdio.h>
#include<conio.h>
void main()
{int i, j, n, p=0;
printf("Enter the value of n:\n");
scanf("%d", &n);
printf("Here is the Floyd's Triangle:\n");
for(i=1; i<=n; i++)
{for(j=1; j<=i; j++)
{p=p+1;
printf("%d  ", p);}
printf("\n");}
getch();
}
