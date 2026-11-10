#include <stdio.h>
int main(void) {
    int n; scanf("%d", &n);
    int half = (n + 1) / 2;

    for (int i = 1; i <= half; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        for (int s = 1; s <= 2 * (half - i) + 1; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    for (int i = half - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("*");
        for (int s = 1; s <= 2 * (half - i) + 1; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
