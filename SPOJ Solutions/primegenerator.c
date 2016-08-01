#include <stdio.h>
#include<math.h>
int main(void)
{
int t;
long int m,n,i,j;
scanf("%d",&t);
while(t--)
{
scanf("%ld %ld",&m,&n);
for(i = m;i<=n;i++)
{
long int rt = sqrt(i);
for(j=2; j<=rt; j++)
{
if(i%j == 0)
{
break;
}
}
if(j>rt&&i!=1)
printf("%ld\n", i);
}
printf("\n");
}
return 0;
}
