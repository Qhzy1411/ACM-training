#include <stdio.h>
#include <string.h>
#define N 1001
int main()
{
	char str[N];
	int n, sign = 1;
	gets(str);
	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] == str[n + 1])
		{
			printf("%c\n", str[n]);
			sign = 0;
			break;
		}
	}
	if (sign)
		printf("No\n");
	return 0;
}
