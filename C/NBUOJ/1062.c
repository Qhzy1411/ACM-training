#include <stdio.h>
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	if (x > y)
		printf("%d %d\n", y, x);
	else
		printf("%d %d\n", x, y);
	return 0;
}
