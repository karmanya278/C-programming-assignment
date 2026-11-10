#include <stdio.h>
int main(void) {
    int n, value = 1; scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) printf(" ");
            printf("%d", value++);
        }
        printf("\n");
    }
    return 0;
}
