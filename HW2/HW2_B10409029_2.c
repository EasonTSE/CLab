#include <stdio.h>
#include <stdlib.h>

int main() {
  float chin, eng, math, failed, highest, loweset;
  int   oper, counter;

start:
  printf("請分別輸入國英數的成績(以空白隔開)：\n");
  scanf("%f %f %f", &chin, &eng, &math);
  
  if (chin < 0 || chin > 100 ||
  	  eng < 0 || eng > 100 ||
	  math < 0 || math > 100) { 
  	printf("成績輸入有誤！分數應在 0 至 100分內\n");
  	goto start;
  } 
choose:
  printf("選擇接下來的動作(輸入數字)\n");
  printf("1.總分 2.平均分 3.不及格科目數 4.最高分 5.最低分\n");
  scanf("%d", &oper);


  switch (oper) {
  case 1:
      printf("總分：%2.2f\n", chin + eng + math);
    return 0;

  case 2:
      printf("平均分：%2.2f\n", (chin + eng + math) / 3);
    return 0;

  case 3:

    counter = 0;

    if (chin < 60) {
      counter++;
    }

    if (eng < 60) {
      counter++;
    }

    if (math < 60) {
      counter++;
    }

      printf("不及格科目數：%d\n", counter);
    return 0;

  case 4:

    if ((chin == eng) && (chin == math)) {
      printf("你三科也是同樣分數：%2.2f分\n", chin);
    }
    else if ((chin > eng) && (chin > math)) {
      printf("最高分：國文 %2.2f分\n",    chin);
    }
    else if ((chin > eng) && (chin == math)) {
      printf("最高分：國文，數學 %2.2f分\n", chin);
    }
    else if ((chin > math) && (chin == eng)) {
      printf("最高分：國文，英文 %2.2f分\n", chin);
    }
    else if ((eng > chin) && (eng > math)) {
      printf("最高分：英文 %2.2f分\n",    eng);
    }
    else if ((eng > chin) && (eng == math)) {
      printf("最高分：英文，數學 %2.2f分\n", eng);
    }
    else if ((eng > math) && (eng == chin)) {
      printf("最高分：國文，英文 %2.2f分\n", chin);
    }
    else if ((math > chin) && (math > eng)) {
      printf("最高分：數學 %2.2f分\n",    math);
    }
    else if ((math > chin) && (math == eng)) {
      printf("最高分：國文，英文 %2.2f分\n", eng);
    }
    else if ((math > eng) && (math == chin)) {
      printf("最高分：國文，數學 %2.2f分\n", chin);
    }

    return 0;

  case 5:

    if ((chin == eng) && (chin == math)) {
      printf("你三科也是同樣分數：%2.2f分\n", chin);
    }
    else if ((chin < eng) && (chin < math)) {
      printf("最低分：國文 %2.2f分\n",    chin);
    }
    else if ((chin < eng) && (chin == math)) {
      printf("最低分：國文，數學 %2.2f分\n", chin);
    }
    else if ((chin < math) && (chin == eng)) {
      printf("最低分：國文，英文 %2.2f分\n", chin);
    }
    else if ((eng < chin) && (eng < math)) {
      printf("最低分：英文 %2.2f分\n",    eng);
    }
    else if ((eng < chin) && (eng == math)) {
      printf("最低分：英文，數學 %2.2f分\n", eng);
    }
    else if ((eng < math) && (eng == chin)) {
      printf("最低分：國文，英文 %2.2f分\n", chin);
    }
    else if ((math < chin) && (math < eng)) {
      printf("最低分：數學 %2.2f分\n",    math);
    }
    else if ((math < chin) && (math == eng)) {
      printf("最低分：國文，英文 %2.2f分\n", eng);
    }
    else if ((math < eng) && (math == chin)) {
      printf("最低分：國文，數學 %2.2f分\n", chin);
    }

    return 0;

  default:
      printf("請輸入1-5之間的數字。\n");
    goto choose;
  }
}
