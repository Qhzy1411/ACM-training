#include <stdio.h>
#define N 3
int main()
{
	int a[N] = {0}, i, j, temp, max, maxlog;
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < N - 1; i++)
	{
		max = a[i];
		maxlog = i;
		for (j = i; j < N; j++)
		{
			if (a[j] > max)
			{
				max = a[j];
				maxlog = j;
			}
		}
		if (a[i] != max)
		{
			temp = a[i];
			a[i] = a[maxlog];
			a[maxlog] = temp;
		}
	}
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	putchar('\n');
	return 0;
}
