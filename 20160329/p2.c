/* prog7_9, �_��for�j��L�X�E�E���k�� */
#include <stdio.h>
#include <stdlib.h>

void print(int int);

int main(void)
{
	int i,j;
  printf("�п�J��ӥ���ơG");
  scanf("%d %d", i,j);

  print(i,j);
	return 0;
}

void print(int num1, int num2)
{
	for (i = num1; i <= num2; i++) /* �~�h�j�� */
	{
		for (j = num2; j <= num2; j++) /* ���h�j�� */
			printf("%d*%d=%2d  ",i,j,i * j);
		printf("\n");
	}
  return;
}
