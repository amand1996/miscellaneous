#include<stdio.h>
#include<math.h>

float func(float a, float b);
float fact(float d);
float c;


void main()
{float x, n;
float p;
printf("\nEnter the value of x:\n");
scanf("%f", &x);
printf("\nEnter the number of terms\n");
scanf("%f", &n);
p=func(x, n);
printf("\nThe value of the function is %f\n", p);
}


float func(float a, float b)
{if (b>=1)
{float k=fact((2*b)-1);
c=(pow(-1, b+1)*pow(a,((2*b)-1)))/k + func(a, (b-1));}
return(c);
}

float fact(float d)
{float p=1;
float i;
for(i=1; i<=d; i++)
	{p=p*i;}
return(p);
}

