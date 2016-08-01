#include<stdio.h>
#include<conio.h>
void main()
{int a[5], i, max;
printf("Enter 5 numbers\n");
for(i=0; i<5; i++)
{scanf("%d", &a[i]);
if(i==0)
{max=a[0];}
else if(a[i]>max)
{max=a[i];}
}
printf("Maximum number out of these is\n  %d", max);
getch();
}
