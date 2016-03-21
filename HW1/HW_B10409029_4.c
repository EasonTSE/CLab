# include <stdlib.h>
# include <stdio.h>

int main() {
  char num1, num2, num3, num4[10];

  printf("請輸入四位整數：");
  scanf("%c%c%c%s", &num1, &num2, &num3, num4);

  printf("你輸入的是：%c%c%c%s\n", num1, num2, num3, num4);

  printf("千位數：%c\n", num1);
  printf("百位數：%c\n", num2);
  printf("十位數：%c\n", num3);
  printf("個位數：%s\n", num4);

  printf("四位倒序：%s%c%c%c\n", num4, num3, num2, num1);
}
