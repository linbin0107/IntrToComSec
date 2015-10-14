
/************************************************
 * Modify function() so that the program prints
 * "x = 0" instead of "x = 1"
 ************************************************/

#include <stdio.h>

void function(int a, int b, int c) {
  char buffer1[5];
  char buffer2[10];
  int *ret;

  printf("ret addr: %p\n", &ret);
  printf("buffer1 addr: %p\n", buffer1);
  printf("buffer1[1] addr: %p\n", &buffer1[1]);
  printf("buffer2 addr: %p\n", buffer2);

  //ret = NULL;
  //ret = buffer1 + 5 + sizeof(int*) + sizeof(void*);
  //(*ret) += 8;
}

int main() {
  int x;

  x = 0;
  function(1, 2, 3);
  x = 1;
  printf("	x = %d\n", x);

  return 0;
}
