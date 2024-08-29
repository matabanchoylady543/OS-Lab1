#include <stdio.h>

int main(void) {

    printf("Dec Octal Hex\n");
    printf("-----------------------------------------\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d\t %o\t  %x\n", i, i, i);
    }

    return 0;
}
