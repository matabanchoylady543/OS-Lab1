#include <stdio.h>

int main(void) {
  char msg[100];
  int upper = 0;

  printf("Type a message: ");
  fgets(msg,100,stdin);

  for (int i = 0; msg[i] != 0; i++){
    if (msg[i]>='A' && msg[i]<='Z'){
      upper++;
    }
  }
  printf("Your message has %d uppercase letters.", upper);
  return 0;
}