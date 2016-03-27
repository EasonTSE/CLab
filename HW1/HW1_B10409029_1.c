# include <stdlib.h>
# include <stdio.h>

int main() {

  int pScore, mtScore;

  printf("請依序輸入平時成績，期中成績：\n");

  printf("平時成績：");
  scanf("%d",&pScore);
  printf("期中成績：");
  scanf("%d",&mtScore);

  float pScore_p, mtScore_p, fScore_p;
  char term;
  printf("請依序輸入平時成績百分比，期中成績百分比，期末成績百分比（例如 0.4 則輸入 40）：\n");

  input_percentage:


  printf("平時成績百分比：");
  scanf("%f", &pScore_p);

  printf("期中成績百分比：");
  scanf("%f", &mtScore_p);

  printf("期末成績百分比：");
  scanf("%f", &fScore_p);

  if (pScore_p + mtScore_p + fScore_p != 100) {
    printf("百分比輸入錯誤，請重新輸入！\n");
    goto input_percentage;
  }

  int reqScore;
  printf("請輸入期望之學期成績：");
  scanf("%d", &reqScore);

  float existingScore = pScore*pScore_p/100 + mtScore*mtScore_p/100;

  float a = reqScore - existingScore;

  float neededScore = a/(float)(fScore_p/100);

  printf("要達成學期成績 %d 分，你的期末成績必須考 %3.2f 分！\n", reqScore, neededScore);

  return 0;
}
