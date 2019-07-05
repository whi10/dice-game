#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
  char name[100];
  int n1,n2;
  printf("What is your name?\n> ");
  scanf("%s", name);
  printf("Hello, %s!\n",name);
  srand(time(NULL));
  n1 = rand() % 6 + 1;
  n2 = rand() % 6 + 1;
  printf("Rolling the dice...\n");
  printf("Dice1: %d\n",n1);
  printf("Dice2: %d\n",n2);
  printf("Total value: %d\n",n1+n2);
  return 0;
}
