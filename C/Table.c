#include<stdio.h>
#include<conio.h>
void main()
{
int a, i, b;
scanf("%d", &a);
for(i=1;i<=10;i++)
{b=a*i;
printf("%d = %d * %d",b ,a, i);
printf("\n");
}
getch();
}
