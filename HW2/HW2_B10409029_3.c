#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c, d;

start:

  printf("�п�JA,B,C,D�ӫ~�ʶR�ƶq�G\n");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  if ((a < 0) || (b < 0) || (c < 0) || (d < 0)) {
      printf("�ʶR�ƶq�����O���ơI�Э��s��J�I\n");
    goto start;
  }

  int total;
  total = (a * 1000) + (b * 1500) + (c * 900) + (d * 2200);

  if (total < 6000) {
      printf("�A�����B���G%d\n", total);
  }
  else if ((total >= 6000) && (total < 8000)) {
      printf("�A�����B���G%d�A���ߧA��o�ɼ��G���իO�i�~\n", total);
  }
  else if ((total >= 8000) && (total < 10000)) {
      printf("�A�����B���G%d�A���ߧA��o�ȼ��G�i��H������\n", total);
  }
  else if (total >= 10000) {
    if (total < 12000) {
      printf("�A�����B���G%d�A���ߧA��o�����GLV�]�]\n", total);
    }
    else if ((total >= 12000) && (total < 14000)) {
      printf("�A�����B���G%d�A���ߧA��o�����G������J��\n", total);
    }
    else if ((total >= 14000) && (total < 17000)) {
      printf("�A�����B���G%d�A���ߧA��o�����G���ū�����\n", total);
    }
    else if (total >= 17000) {
      printf("�A�����B���G%d�A���ߧA��o�����G����\n", total);
    }
  }

  return 0;
}
