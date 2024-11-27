//书P206
#include <stdio.h>
void move(char x, char y)
{
    printf("%c->%c\n", x, y);
}
void hanoi(int n, char A, char B, char C)
{
    if (n == 1)
        move(A, C);
    else
    {
        hanoi(n - 1, A, C, B);
        move(A, C);
        hanoi(n - 1, B, A, C);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'a', 'b', 'c');
    return 0;
}