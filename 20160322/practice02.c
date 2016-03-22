#include <stdlib.h>
#include <stdio.h>

int main() {
  int i, sum = 0;

  for (i = 1; sum <= 100; i++) {
    sum += i;
    printf("從1累加到%2d = %2d\n", i, sum);
  }

  printf("必須累加到%d", i - 1);

  return 0;
}
