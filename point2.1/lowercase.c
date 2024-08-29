#include <stdio.h>

int main(void) {

  char msg[100];
  int i;
  int lower = 0;

  printf("Type a message: ");
  fgets(msg,100,stdin);

  for (i = 0; msg[i] != 0; i++){
    if (msg[i]>='a' && msg[i]<='z'){
      lower++;
    }
  }
  printf("Your message has %d lowercase letters.", lower);
  return 0;
}