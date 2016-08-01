#include<stdio.h>
int main()
{
	int t, num, count;
	scanf("%d", &t);
	while(t>0)
	{
		scanf("%d", &num);
		count = 0;
		while(num>0)
		{
			if(num%10==4)
			{
				count++;
			}
			
			num = num/10;
		}
		
		printf("%d\n", count);
		t--;
	}
	return 0;
}
