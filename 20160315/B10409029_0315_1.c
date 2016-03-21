#include <stdlib.h>
#include <stdio.h>

int main() {
  int  month;
  char junk;

start:
  printf("請輸入月份：");
  scanf("%d%c", &month, &junk);

  if ((month >= 3) && (month <= 5)) {
    printf("%d月是春天\n", month);
  }
  else if ((month >= 6) && (month <= 8)) {
    printf("%d月是夏天\n", month);
  }
  else if ((month >= 9) && (month <= 11)) {
    printf("%d月是秋天\n", month);
  }
  else if ((month == 12) || (month == 1) || (month == 2)) {
    printf("%d月是冬天\n", month);
  }
  else {
    printf("月份輸入錯誤！\n");
    goto start;
  }

  return 0;
}
