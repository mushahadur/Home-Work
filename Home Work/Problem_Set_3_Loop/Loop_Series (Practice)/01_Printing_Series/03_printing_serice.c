/*
    03. Printing Series
        1, 1, 2, 3, 5, 8, 13, 21, 34, ..., N
*/
#include <stdio.h>
int main() {
    int i, n, pre = 0, post = 1,sum;
    sum = pre + post;
    scanf("%d", &n);
    for (i = 0; i <= n; ++i) {
        printf("%d\n", sum);
        pre = post;
        post = sum;
        sum = pre + post;
    }

    return 0;
}

