#include<stdio.h>
#include<conio.h>
void main()
{
int n;
float i, sum;
printf("Enter the value of n\n");
scanf("%d", &n);
sum=0;
for(i=1; i<=n; i++)
{sum = sum + (1/i);
}
printf("%f", sum);
getch();
}
