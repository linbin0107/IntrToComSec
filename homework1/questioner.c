/*************************************************************
 * Name: Bin Lin
 * Homework 1##Problem 2 of Introdction to Computer Security
**************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char name[30], line[80];
  char *ch;
  int num = 0, magic = 0, res = 0, found = 0;
  FILE *fp;

  printf("What is your name?\n");
  scanf("%s", name);

  printf("What is the magic number, %s?\n", name);
  scanf("%d", &num);
#ifdef DEBUG
  printf("num = %d\n", num);
#endif

  fp = fopen("answers.txt", "r");
  if(!fp){
    printf("Open file answers.txt failed...\n");
    return 1;
  }

  while(fgets(line, sizeof(line), fp)){
    ch = strtok(line, " ");
#ifdef DEBUG
    printf("%s", line);
    printf("name: %s\n", ch);
#endif

    res = strcmp(name, ch);
    if(res == 0) {
      found = 1;
      magic = atoi(strtok(NULL, " "));
#ifdef DEBUG
      printf("%d\n", magic);
#endif
      if(num < magic){
        printf("TOO LOW\n");
      } else if(num > magic){
        printf("TOO HIGH\n");
      } else {
        printf("SUCCESS\n");
      }

      fclose(fp);
      break;
    }
  }

  if(!found){
    if(num < 12345){
      printf("TOO LOW\n");
    } else if(num > 12345){
      printf("TOO HIGH\n");
    } else {
      printf("SUCCESS\n");
    }

    fclose(fp);
  }

  return 0;
}
