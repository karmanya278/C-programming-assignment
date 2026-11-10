#include <stdio.h>

int main(void)
{
    int n;
    unsigned long long fact = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        fact *= (unsigned long long)i;

    printf("%llu\n", fact);
    return 0;
}
