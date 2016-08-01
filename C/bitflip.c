//Created By Aman Dwivedi
//Bitflip (Using Tilde '`')

#include <stdio.h>
int main() 
{
    int t, i;
    scanf("%d", &t);
    unsigned int a[t];
    for(i=0; i<t; i++)
   { 
    scanf("%u", &a[i]);
  }
    for(i=0; i<t; i++)
   {
    printf("%u\n", ~a[i]);
    }return 0;
}

