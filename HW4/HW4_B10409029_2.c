#include <stdio.h>
#include <stdlib.h>

char grade(float, float, float);
char isVaild(int, int, int);

int main()
{
	char oper;
	do
	{
		float chin, eng, math;

		do {
			printf("�п�J��^�Ʀ��Z�G");
			scanf("%f %f %f", &chin, &eng, &math);

			if (isVaild(chin,eng,math) == 'N')
				printf("��J���~�I\n");
		} while(isVaild(chin,eng,math) == 'N');

		printf("�A�����ƩM���Ĭ��G%.2f/%c ",
		       (chin + eng + math) / 3,
		       grade(chin, eng, math));

		printf("(��J0����)");
		scanf(" %c", &oper);
	} while (oper != '0');

	return 0;
}

char grade(float a, float b, float c)
{
	float mean = (a + b + c) / 3;

	if (mean > 90)
		return 'A';
	else if (mean > 80)
		return 'B';
	else if (mean > 70)
		return 'C';
	else if (mean > 60)
		return 'D';
	else
		return 'E';
}

char isVaild(int a, int b, int c)
{
	if (a > 100 || a < 0)
		return 'N';
	else if (b > 100 || b < 0)
		return 'N';
	else if (c > 100 || c < 0)
		return 'N';
	else
		return 'Y';
}
