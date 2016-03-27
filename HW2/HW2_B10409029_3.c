#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c, d;

start:

  printf("請輸入A,B,C,D商品購買數量：\n");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  if ((a < 0) || (b < 0) || (c < 0) || (d < 0)) {
      printf("購買數量必須是正數！請重新輸入！\n");
    goto start;
  }

  int total;
  total = (a * 1000) + (b * 1500) + (c * 900) + (d * 2200);

  if (total < 6000) {
      printf("你的金額為：%d\n", total);
  }
  else if ((total >= 6000) && (total < 8000)) {
      printf("你的金額為：%d，恭喜你獲得銅獎：美白保養品\n", total);
  }
  else if ((total >= 8000) && (total < 10000)) {
      printf("你的金額為：%d，恭喜你獲得銀獎：養氣人參雞精\n", total);
  }
  else if (total >= 10000) {
    if (total < 12000) {
      printf("你的金額為：%d，恭喜你獲得金獎：LV包包\n", total);
    }
    else if ((total >= 12000) && (total < 14000)) {
      printf("你的金額為：%d，恭喜你獲得金獎：飯店住宿券\n", total);
    }
    else if ((total >= 14000) && (total < 17000)) {
      printf("你的金額為：%d，恭喜你獲得金獎：高級按摩椅\n", total);
    }
    else if (total >= 17000) {
      printf("你的金額為：%d，恭喜你獲得金獎：機票\n", total);
    }
  }

  return 0;
}
