#include <stdio.h>
int main()
{
char word[10];
int i = 0;
while (scanf("%s", word) ==1) {
i = i + 1;
if (i % 2)
fprintf(stdout, "%s\n", word);
else
fprintf(stderr, "%s\n", word);
}
return 0;
}
