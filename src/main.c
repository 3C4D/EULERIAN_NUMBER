#include <stdlib.h>
#include <stdio.h>
#include "euler.h"

int main(int argc, char **argv){
  int i, j;

  for(i = 1; i < atoi(argv[1])+1; i++){
    for(j = 0; j < i; j++){
      printf("%d ", nombre_eulerien(i, j));
    }
    putchar('\n');
  }

  exit(0);
}
