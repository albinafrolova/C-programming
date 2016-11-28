#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
  //Statements
  srand(time(NULL)); //Seed temporally

  printf("%d\n", rand());
  printf("%d\n", rand());
  printf("%d\n", rand());

  return 0;          
}//main