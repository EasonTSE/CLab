/* prog7_9, 巢狀for迴圈印出九九乘法表 */
#include <stdio.h>
#include <stdlib.h>

void print(int int);

int main(void)
{
	int i,j;
  printf("請輸入兩個正整數：");
  scanf("%d %d", i,j);

  print(i,j);
	return 0;
}

void print(int num1, int num2)
{
	for (i = num1; i <= num2; i++) /* 外層迴圈 */
	{
		for (j = num2; j <= num2; j++) /* 內層迴圈 */
			printf("%d*%d=%2d  ",i,j,i * j);
		printf("\n");
	}
  return;
}
