/*
    06. Factorial Series Number
        N! = 1.2.3.4.....N
*/
#include <stdio.h>
int main() {
    int n, i,fact=1;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
            fact *= i;
            printf("%d\n",fact);
        }
    printf("\n%d\n",fact);

    return 0;
}

