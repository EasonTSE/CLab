#include <stdio.h>
#include <stdlib.h>

int main() {
  char  sname1[20], sname2[20], sname3[20];
  float score1, score2, score3;

start:

  printf("請依序輸入三位學生姓名：\n");
  scanf("%s %s %s", sname1, sname2, sname3);

  printf("請依序輸入三位學生成績：\n");
  scanf("%f %f %f", &score1, &score2, &score3);

  if ((score1 < 0) || (score2 < 0) || (score3 < 0)) {
    printf("分數一定是正數！請重新輸入！\n");
    goto start;
  }

  if ((score1 == score2) && (score1 == score3)) {
    printf("三位同學的分數一樣，%2.2f分\n",   score1);
  }
  else if ((score1 > score2) && (score1 > score3)) {
    printf("最高分為%s同學，%2.2f分\n",    sname1, score1);
  }
  else if ((score1 > score2) && (score1 == score3)) {
    printf("最高分為%s和%s同學，%2.2f分\n", sname1, sname3, score1);
  }
  else if ((score1 > score3) && (score1 == score2)) {
    printf("最高分為%s和%s同學，%2.2f分\n", sname1, sname2, score1);
  }
  else if ((score2 > score1) && (score2 > score3)) {
    printf("最高分為%s同學，%2.2f分\n",    sname2, score2);
  }
  else if ((score2 > score1) && (score2 == score3)) {
    printf("最高分為%s和%s同學，%2.2f分\n", sname2, sname3, score2);
  }
  else if ((score2 > score3) && (score2 == score1)) {
    printf("最高分為%s和%s同學，%2.2f分\n", sname1, sname2, score1);
  }
  else if ((score3 > score1) && (score3 > score2)) {
    printf("最高分為%s同學，%2.2f分\n",    sname3, score3);
  }
  else if ((score3 > score1) && (score3 == score2)) {
    printf("最高分為%s和%s同學，%2.2f分\n", sname2, sname3, score2);
  }
  else if ((score3 > score2) && (score3 == score1)) {
    printf("最高分為%s和%s同學，%2.2f分\n", sname1, sname3, score1);
  }

  return 0;
}
