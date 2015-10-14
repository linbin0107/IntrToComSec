#include <stdio.h>

void function(int a, int b, int c) {
  char buffer[16];

  scanf("%s", buffer);
}

int main() {
  int x;

  x = 0;
  function(1, 2, 3);
  x = 1;
  printf("	x = %d\n", x);

  return 0;
}
