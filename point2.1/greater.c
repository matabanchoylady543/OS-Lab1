#include <stdio.h>

int main(void) {
  int mayor, i, num[3];

  printf("Type the numbers:\n");
  for (i = 0; i < 3; i++) {
    scanf("%d", &num[i]);
  }

  mayor = num[0];
  for (i = 1; i < 3; i++) {
    if (num[i] > mayor) {
      mayor = num[i];
    }
  }
  printf("The biggest number is %d", mayor);
  return 0;
}
