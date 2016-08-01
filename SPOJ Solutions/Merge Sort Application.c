#include<stdio.h>
void main()
{
  int num=0, n, a, b, i=1, j=1;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  int array[n];
  printf("Enter the values of a and b\n");
  scanf("%d", &a);
  scanf("%d", &b);
  while(num<n)
  {

    if(a*i < b*j)
    {
      array[num]=a*i;
      i++;

    }
    else if(a*i > b*j)
    {
      array[num]=b*j;
      j++;

    }
    else if(a*i == b*j)
    {
      array[num]=b*j;
      j++;
      i++;

    }
    num++;
  }

  printf("The answer is %d", array[n-1]);
}
