# include <stdio.h>
# include <stdlib.h>

int main () {
  int num;
  printf("請輸入一個整數：");
  scanf("%d", &num);

  if (num > = 0) {
    if (num <= 10)
      printf("數字介於0到10之間\n");
  }
  else
    printf("數字 < 0\n");

  return 0;
}
