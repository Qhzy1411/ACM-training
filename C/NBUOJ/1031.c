#include <stdio.h>
int main()
{
	int num, newnum = 0, low;
	scanf("%d", &num);
	while (num != 0)
	{
		low = num % 10;
		newnum += low;
		newnum *= 10;
		num /= 10;
	}
	printf("%d\n", newnum / 10);
	return 0;
}
