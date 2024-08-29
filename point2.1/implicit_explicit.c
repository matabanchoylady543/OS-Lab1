//Casting implicit.
#include <stdio.h>

int main(void) {

  char lt;
  int num;

  printf("Enter a letter: ");
  scanf("%c", &lt); 
  printf("Enter a number: ");
  scanf(" %d", &num); 

  float sum = num + lt; //the letter is converted to an ASCII value and the final sum remains in float.
  printf("Value of sum implicit : %f", sum);

  // Casting explicit.

  int int_lt = (int)lt; //with incompatible data types, an explicit conversion is necessary, for example, a letter is converted to a number depending on the ASCII value and declarating this.
  printf("\nletter: %c, letter value: %d\n", lt,int_lt);

  return 0;
}
