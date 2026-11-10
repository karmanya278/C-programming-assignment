#include <stdio.h>

int solveMeFirst(int a, int b)
{
    return a + b;
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", solveMeFirst(a, b));
    return 0;
}
