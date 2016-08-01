int large();

#include<stdio.h>
int a[3][3];
main()
{int i, j,p;
for(i=0; i<3; i++)
{for(j=0; j<3; j++)
{scanf("%d", &a[i][j]);}
}
p=large();
printf("%d", p);
}

int large()
{int i, j, z;
z=a[0][0];
for(i=0; i<3; i++)
{for(j=0; j<3; j++)
{if(a[i][j]>z)
{z=a[i][j];}
}
}
return(z);
}
