#include <stdio.h>

int main(void)
{
    int a, b;

    /* Check the official statement for the exact input/output task.
       This starter version reads two integers and prints their sum. */
    if (scanf("%d %d", &a, &b) != 2)
        return 0;

    printf("%d\n", a + b);
    return 0;
}
