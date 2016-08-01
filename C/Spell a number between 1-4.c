#include<stdio.h>
#include<conio.h>
void main()
{int num;
printf("Enter a number between 1-4= ");
scanf("%d", &num);
switch(num)
{case 1: printf("one"); break;
case 2: printf("two"); break;
case 3: printf("three"); break;
case 4: printf("four"); break;
default: printf("invalid");
}
getch();
}
