#include<stdio.h>
void main()
{int a, b, c, i;
printf("Enter two numbers= ");
scanf("%d %d", &a, &b);
printf("Enter the limiting number= ");
scanf("%d", &i);
printf("%d, %d, ", a, b);
while(c<=i)
{c=a+b;
printf("%d ,", c);
a=c;
c=a+b;
printf("%d ,", c);
b=c;}
}
