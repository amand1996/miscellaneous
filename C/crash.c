#include<stdio.h>
void chorus(void);
int count=0;
void main()
{
chorus();
}

void chorus(void)
{
count++;
printf("%d\t", count);
chorus();
}
