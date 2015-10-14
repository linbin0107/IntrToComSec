/*************************************************************
 * Name: Bin Lin
 * Homework 1##Problem 3 of Introdction to Computer Security
 *************************************************************
 * Assume that the input questions are from stdin
**************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char question1[20], question2[32];
  const char *QUEST1 = "What is your name?";
  const char *QUEST2 = "What is the magic number, Bob?";
  int res = 0;

  srand((unsigned)time(NULL));

  fgets(question1, 20, stdin);
#ifdef DEBUG
  printf("%s\n", question1);
#endif
  question1[18] = '\0';
  res = strcmp(question1, QUEST1);
  if(res == 0)
    printf("Bob\n");
  else
    printf("???\n");

  fgets(question2, 32, stdin);
#ifdef DEBUG
  printf("%s\n", question2);
#endif

  question2[30] = '\0';
  res = strcmp(question2, QUEST2);
  if(res == 0){
    printf("%d\n", rand());
  } else {
    printf("???\n");
  }

  return 0;
}
