#include <stdlib.h>
#include <stdio.h>

char* kangaroo(int x1, int v1, int x2, int v2)
{
    if (v1 == v2)
        return (x1 == x2) ? "YES" : "NO";

    int numerator = x2 - x1;
    int denominator = v1 - v2;

    if (numerator % denominator == 0 && numerator / denominator >= 0)
        return "YES";

    return "NO";
}
