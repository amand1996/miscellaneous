#include<stdio.h>
#include<conio.h>
void main()
{int a, b, count, i, j;
printf("Enter the values of a and b\n");
scanf("%d %d", &a, &b);
printf("The prime numbers between %d and %d are:\n", a, b);
for(i=a; i<b; i++)
{for(j=1; j<=i; j++)
{if(i%j==0)
{count++;}}
if(count==2)
{printf("%d\n", i);
}count=0;}
getch();
}
