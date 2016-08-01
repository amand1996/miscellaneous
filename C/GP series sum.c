#include<conio.h>
#include<stdio.h>
void main()
{int m=1, n, i, x, sum=1;
printf("Enter the value of n and x\n");
scanf("%d %d", &n, &x);
for(i=1; i<=n; i++)
{m=x*m;
sum=sum + m;}
printf("%d", sum);
getch();
}
