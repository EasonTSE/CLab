# include <stdio.h>
# include <stdlib.h>

int main() {

  int score;

  printf("請輸入成績：");
  scanf("%d", &score);

  if ((score < 0) || (score > 100))
    printf("成績輸入錯誤\n");

  if ((score < 60) && (score > 49))
    printf("需要補考\n");
}
