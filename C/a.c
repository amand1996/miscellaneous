#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
    {
    int t, i, j=0, k, l;
    scanf("%d", &t);
    int a[t];
    char str[30];
    for(i=0; i<t; i++)
        {int count=0, j=0;
        scanf("%s", str);
        l=strlen(str);
        for(k=0; k<l; k++)
        {
          while(str[j]!=str[l-j-1])
        {if(str[j]>str[l-j-1])
        {str[j]=str[j]-1;}
        else
        {str[l-j-1]=str[l-j-1]-1;}
        count++;}
        a[i]=count;
        
        j++;}printf("%d\n", a[i]);}
  
}
