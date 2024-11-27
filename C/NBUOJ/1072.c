#include <stdio.h>
int main()
{
	int input;
	scanf("%d", &input);
	if (input % 4 == 0 && input % 100 != 0 || input % 400 == 0)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
