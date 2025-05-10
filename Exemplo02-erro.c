#include <stdio.h>
#include <stdlib.h>

int main() {
  int v[5] = {1, 2, 3, 4, 5};
  int v1[5];
  
  //v1 = v; // ERRADO!

  int i, j;
  for (i = 0; i < 5; i++) {

    v1[i] = v[i]; // CORRETO

  }

  for (j = 0; j < 5; j++) {

     printf("%d ", v1[j]); 

  }

  return 0;
}