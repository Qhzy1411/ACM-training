#include <stdio.h>
int main()
{
	double x, y, z;
	char op;
	scanf("%lf%c%lf", &x, &op, &y);
	switch (op)
	{
	case '+':
		z = x + y;
		break;
	case '-':
		z = x - y;
		break;
	case '*':
		z = x * y;
		break;
	case '/':
		z = x / y;
		break;
	}
	printf("%.2f\n", z);
	return 0;
}
