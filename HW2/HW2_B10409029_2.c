#include <stdio.h>
#include <stdlib.h>

int main() {
  float chin, eng, math, failed, highest, loweset;
  int   oper, counter;

start:
  printf("�Ф��O��J��^�ƪ����Z(�H�ťչj�})�G\n");
  scanf("%f %f %f", &chin, &eng, &math);
  
  if (chin < 0 || chin > 100 ||
  	  eng < 0 || eng > 100 ||
	  math < 0 || math > 100) { 
  	printf("���Z��J���~�I�������b 0 �� 100����\n");
  	goto start;
  } 
choose:
  printf("��ܱ��U�Ӫ��ʧ@(��J�Ʀr)\n");
  printf("1.�`�� 2.������ 3.���ή��ؼ� 4.�̰��� 5.�̧C��\n");
  scanf("%d", &oper);


  switch (oper) {
  case 1:
      printf("�`���G%2.2f\n", chin + eng + math);
    return 0;

  case 2:
      printf("�������G%2.2f\n", (chin + eng + math) / 3);
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

      printf("���ή��ؼơG%d\n", counter);
    return 0;

  case 4:

    if ((chin == eng) && (chin == math)) {
      printf("�A�T��]�O�P�ˤ��ơG%2.2f��\n", chin);
    }
    else if ((chin > eng) && (chin > math)) {
      printf("�̰����G��� %2.2f��\n",    chin);
    }
    else if ((chin > eng) && (chin == math)) {
      printf("�̰����G���A�ƾ� %2.2f��\n", chin);
    }
    else if ((chin > math) && (chin == eng)) {
      printf("�̰����G���A�^�� %2.2f��\n", chin);
    }
    else if ((eng > chin) && (eng > math)) {
      printf("�̰����G�^�� %2.2f��\n",    eng);
    }
    else if ((eng > chin) && (eng == math)) {
      printf("�̰����G�^��A�ƾ� %2.2f��\n", eng);
    }
    else if ((eng > math) && (eng == chin)) {
      printf("�̰����G���A�^�� %2.2f��\n", chin);
    }
    else if ((math > chin) && (math > eng)) {
      printf("�̰����G�ƾ� %2.2f��\n",    math);
    }
    else if ((math > chin) && (math == eng)) {
      printf("�̰����G���A�^�� %2.2f��\n", eng);
    }
    else if ((math > eng) && (math == chin)) {
      printf("�̰����G���A�ƾ� %2.2f��\n", chin);
    }

    return 0;

  case 5:

    if ((chin == eng) && (chin == math)) {
      printf("�A�T��]�O�P�ˤ��ơG%2.2f��\n", chin);
    }
    else if ((chin < eng) && (chin < math)) {
      printf("�̧C���G��� %2.2f��\n",    chin);
    }
    else if ((chin < eng) && (chin == math)) {
      printf("�̧C���G���A�ƾ� %2.2f��\n", chin);
    }
    else if ((chin < math) && (chin == eng)) {
      printf("�̧C���G���A�^�� %2.2f��\n", chin);
    }
    else if ((eng < chin) && (eng < math)) {
      printf("�̧C���G�^�� %2.2f��\n",    eng);
    }
    else if ((eng < chin) && (eng == math)) {
      printf("�̧C���G�^��A�ƾ� %2.2f��\n", eng);
    }
    else if ((eng < math) && (eng == chin)) {
      printf("�̧C���G���A�^�� %2.2f��\n", chin);
    }
    else if ((math < chin) && (math < eng)) {
      printf("�̧C���G�ƾ� %2.2f��\n",    math);
    }
    else if ((math < chin) && (math == eng)) {
      printf("�̧C���G���A�^�� %2.2f��\n", eng);
    }
    else if ((math < eng) && (math == chin)) {
      printf("�̧C���G���A�ƾ� %2.2f��\n", chin);
    }

    return 0;

  default:
      printf("�п�J1-5�������Ʀr�C\n");
    goto choose;
  }
}
