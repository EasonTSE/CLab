# include <stdio.h>
# include <stdlib.h>

int main()
{
	int num1, num2, i, hcf;
	char oper = 'q';

	do {
		printf("�п�J��ӼơA�N��X�̤j���]�ơG");
		scanf("%d %d", &num1, &num2);

		for (i = 1; i <= num1 || i <= num2; i++)
			if (num1 % i == 0 && num2 % i == 0)
				hcf = i;

		printf("�̤j���]�Ƭ��G%d\n", hcf);

		fflush(stdin);

		printf("��Jy���s����An�h�X�{���G");
		scanf("%c", &oper);

	} while (oper == 'y' || oper != 'n');

	printf("�h�´f�U\n");

	return 0;
}
