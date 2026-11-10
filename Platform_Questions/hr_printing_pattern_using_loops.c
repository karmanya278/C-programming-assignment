#include <stdio.h>

void printPattern(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int bottom = 2 * n - 2 - i;
            int right = 2 * n - 2 - j;

            int minimum = top;
            if (left < minimum) minimum = left;
            if (bottom < minimum) minimum = bottom;
            if (right < minimum) minimum = right;

            printf("%d", n - minimum);
        }
        printf("\n");
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
