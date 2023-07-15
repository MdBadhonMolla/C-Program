#include <stdio.h>

int main() {
  int i, j, K;

  // Outer loop
  for (i = 0; i < 4; ++i) {
    printf("NAME : %d\n", i);  // Executes 2 times

    // Inner loop
    for (j = 1; j <= 3; ++j) {
      printf(" B: %d\n", j);  // Executes 6 times (2 * 3)
      }
    for (K = 1; K <= 2; ++K) {
      printf(" A: %d\n", K);
      }

  }

  return 0;
}


