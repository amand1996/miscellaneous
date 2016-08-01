#include<stdio.h>
#include<conio.h>
void main()
{int a, b, m=1, sum=0;
scanf("%d", &a);
while(a!=0)
{b= a % 2;
m=10*m;
sum=sum+ b*m/10;
a=a/2;
}
printf("%d", sum);
getch();
}
