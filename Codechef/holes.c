#include<stdio.h>
#include<string.h>
int main()
{
	int t, count = 0, l;
	char text[100];
	scanf("%d", &t);
	if(t<=40)
	{
		while(t>0)
		{
			count = 0;
			scanf("%s", text);
			l = strlen(text);
			while(text[l-1]>=65 && text[l-1]<=90 && text[l-1]!=' ' && text[l-1]!='\0')
			{
				if(text[l-1]>=65 && text[l-1]<=90 && text[l-1]!=' '){
				if(text[l - 1]=='A' || text[l - 1]=='D' || text[l - 1]=='O' || text[l - 1]=='P' || text[l - 1]=='R' || text[l-1]=='Q')
				{
					count++;
				}
				
				if(text[l-1]=='B' )
				{
					count = count +2;
				}
				l--;
			}
			else{break;}
		}
			printf("%d\n", count);			
			t--;
		}
	}
	return 0;
}
