#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, answer;
    int exam = 1;
    char op;
    scanf("%lf%c%lf", &a, &op, &b);
    switch (op)
    {
    case '+':
        answer = a + b;
        break;
    case '-':
        answer = a - b;
        break;
    case '*':
        answer = a * b;
        break;
    case '/':
        if (b != 0)
            answer = a / b;
        else
        {
            printf("Error\n");
            exam = 0;
        }
        break;
    case '^':
        answer = pow(a, b);
        break;
    default:
        printf("Error\n");
        exam = 0;
        break;
    }
    if (exam)
        printf("%.2f\n", answer);
    return 0;
}