#include<stdio.h>
void main()
{float i, p=1, n, sum=1;
printf("\nEnter the value of n:\n");
scanf("%f", &n);
for(i=1; i<=n; i++)
{p=p*i;
sum=sum+1/p;
}
printf("\nHence the Euler's Number is %f\n", sum);
}
