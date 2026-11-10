#include <stdio.h>

void staircase(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int space = 0; space < n - i; space++)
            printf(" ");

        for (int star = 0; star < i; star++)
            printf("#");

        printf("\n");
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    staircase(n);
    return 0;
}
