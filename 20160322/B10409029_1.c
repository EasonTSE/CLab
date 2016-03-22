
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char ch;
  int  n, i;

  printf("你要執行程式嗎? 按Y執行，其他 任意鍵 離開：\n");
  ch = getch();

  if (((ch == 'y') || (ch == 'Y'))) {
    ch = 'q';

    while (((ch != 'y') || (ch != 'Y'))) {
      int n, sum = 0;
      printf("請輸入N值: ");
      scanf("%d", &n);

      for (i = 1; i <= n; i++) {
        sum += i;
      }

      printf("由1累加到 %d 是 %d \n", n, sum);


      printf("要再次執行嗎? 按 任意鍵 繼續, 按 N 或 n 離開：\n");
      ch = getch();

      if (((ch == 'n') || (ch == 'N'))) {
        return 0;
      }
    }
  }
  else {
    return 0;
  }
}
