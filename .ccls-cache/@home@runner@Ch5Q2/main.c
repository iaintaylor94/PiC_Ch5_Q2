// Program to create a table of n vs n^2

#include <stdio.h>

int main(void) {

  // Table heading
  printf ("TABLE FOR N^2\n");
  printf (" n     n^2 \n");
  printf ("--- ---------\n");

  for (int i = 1; i <= 10; i++) {
    printf ("%3i      %4i   \n", i, i*i);
  }

  printf ("\n");
  
  return 0;
}