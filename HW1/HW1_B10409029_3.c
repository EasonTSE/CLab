#include <stdio.h>
#include <stdlib.h>

int main() {
  char ch1, ch2, ch3, ch4;

  printf("請輸入四個字元：");
  scanf("%c %c %c %c", &ch1, &ch2, &ch3, &ch4);

  printf("輸入四個字元為：%c %c %c %c\n",
         ch1, ch2, ch3, ch4);

  printf("輸入四個字元之ASCII Code值為：%d %d %d %d\n",
         ch1, ch2, ch3, ch4);

  printf("輸入四個字元加密ASCII Code值為：%d %d %d %d\n",
         ch1 - 20, ch2 - 20, ch3 - 20, ch4 - 20);

  printf("輸入四個字元加密後為：%c %c %c %c\n",
         ch1 - 20, ch2 - 20, ch3 - 20, ch4 - 20);

  return 0;
}
