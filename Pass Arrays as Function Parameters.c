#include <stdio.h>

void myFunction(int myNumbers[10]) {
  for (int i = 0; i < 10; i++) {
    printf("The Number is - %d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  myFunction(myNumbers);
  return 0;
}
