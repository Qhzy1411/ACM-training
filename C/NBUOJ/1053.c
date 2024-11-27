#include <stdio.h>
#define N 1001
int main()
{
	char str[N];
	int n = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	str[0] = getchar();
	while (!(str[n] == '\n' || str[n] == '\r'))
	{
		n++;
		str[n] = getchar();
	}
	str[n] = '\0';
	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 'a' && str[n] <= 'z' || str[n] >= 'A' && str[n] <= 'Z')
			sum1++;
		else if (str[n] >= '0' && str[n] <= '9')
			sum2++;
		else if (str[n] == ' ')
			sum3++;
		else
			sum4++;
	}
	printf("%d %d %d %d\n", sum1, sum2, sum3, sum4);
	return 0;
}
