
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char ch;
  int  n, i;

  printf("�A�n����{����? ��Y����A��L ���N�� ���}�G\n");
  ch = getch();

  if (((ch == 'y') || (ch == 'Y'))) {
    ch = 'q';

    while (((ch != 'y') || (ch != 'Y'))) {
      int n, sum = 0;
      printf("�п�JN��: ");
      scanf("%d", &n);

      for (i = 1; i <= n; i++) {
        sum += i;
      }

      printf("��1�֥[�� %d �O %d \n", n, sum);


      printf("�n�A�������? �� ���N�� �~��, �� N �� n ���}�G\n");
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
