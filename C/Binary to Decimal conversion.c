#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, m=1, sum=0;
scanf("%d", &a);
while(a!=0)
{b=a % 10;
m=m*2;
sum=sum + b*m/2;
a= a/10;}
printf ("%d", sum);
getch();
}
