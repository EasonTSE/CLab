#include <stdio.h>
#include <stdlib.h>

int main() {
  char  sname1[20], sname2[20], sname3[20];
  float score1, score2, score3;

start:

  printf("�Ш̧ǿ�J�T��ǥͩm�W�G\n");
  scanf("%s %s %s", sname1, sname2, sname3);

  printf("�Ш̧ǿ�J�T��ǥͦ��Z�G\n");
  scanf("%f %f %f", &score1, &score2, &score3);

  if ((score1 < 0) || (score2 < 0) || (score3 < 0)) {
    printf("���Ƥ@�w�O���ơI�Э��s��J�I\n");
    goto start;
  }

  if ((score1 == score2) && (score1 == score3)) {
    printf("�T��P�Ǫ����Ƥ@�ˡA%2.2f��\n",   score1);
  }
  else if ((score1 > score2) && (score1 > score3)) {
    printf("�̰�����%s�P�ǡA%2.2f��\n",    sname1, score1);
  }
  else if ((score1 > score2) && (score1 == score3)) {
    printf("�̰�����%s�M%s�P�ǡA%2.2f��\n", sname1, sname3, score1);
  }
  else if ((score1 > score3) && (score1 == score2)) {
    printf("�̰�����%s�M%s�P�ǡA%2.2f��\n", sname1, sname2, score1);
  }
  else if ((score2 > score1) && (score2 > score3)) {
    printf("�̰�����%s�P�ǡA%2.2f��\n",    sname2, score2);
  }
  else if ((score2 > score1) && (score2 == score3)) {
    printf("�̰�����%s�M%s�P�ǡA%2.2f��\n", sname2, sname3, score2);
  }
  else if ((score2 > score3) && (score2 == score1)) {
    printf("�̰�����%s�M%s�P�ǡA%2.2f��\n", sname1, sname2, score1);
  }
  else if ((score3 > score1) && (score3 > score2)) {
    printf("�̰�����%s�P�ǡA%2.2f��\n",    sname3, score3);
  }
  else if ((score3 > score1) && (score3 == score2)) {
    printf("�̰�����%s�M%s�P�ǡA%2.2f��\n", sname2, sname3, score2);
  }
  else if ((score3 > score2) && (score3 == score1)) {
    printf("�̰�����%s�M%s�P�ǡA%2.2f��\n", sname1, sname3, score1);
  }

  return 0;
}
