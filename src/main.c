#include <stdlib.h>
#include <stdio.h>
#include "euler.h"

int main(int argc, char **argv){
  int n, m;

  if(argc < 3){
    fprintf(stderr, "\nUsage : %s n m\n", argv[0]);
    fprintf(stderr, "    - n, m > 0\n");
    fprintf(stderr, "    - m < n\n\n");
    exit(-1);
  }

  n = atoi(argv[1]);
  m = atoi(argv[2]);

  if(n < 1 || m < 0 || m > n-1){
    fprintf(stderr, "\nUsage : %s n m\n", argv[0]);
    fprintf(stderr, "    - n, m > 0\n");
    fprintf(stderr, "    - m < n\n\n");
    exit(-1);
  }

  printf("\nA(%d, %d) = %d\n\n", n, m, nombre_eulerien(n, m));

  exit(0);
}
