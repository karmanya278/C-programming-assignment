#include <stdio.h>

int main(void)
{
    int n, k, value;
    int count = 0;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);

        if (value % k == 0)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
