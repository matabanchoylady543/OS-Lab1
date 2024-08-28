#include <stdio.h>

int main() {

    int n, first = 0, second = 1, next;
    printf("Introduce el numero de terminos: ");
    scanf("%d", &n);
    printf("Serie de Fibonacci: ");

    for (int i = 0; i < n; i++) {
        if (i <= 0)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\nUltima suma (Fibonacci de %d): %d\n", n, next);
    return 0;
}