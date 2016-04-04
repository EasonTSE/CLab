# include <stdio.h>
# include <stdlib.h>

int main()
{
	int num1, num2, i, hcf;
	char oper = 'q';

	do {
		printf("叫块ㄢ计盢т程そ计");
		scanf("%d %d", &num1, &num2);

		for (i = 1; i <= num1 || i <= num2; i++)
			if (num1 % i == 0 && num2 % i == 0)
				hcf = i;

		printf("程そ计%d\n", hcf);

		fflush(stdin);

		printf("块y穝磅︽n癶祘Α");
		scanf("%c", &oper);

	} while (oper == 'y' || oper != 'n');

	printf("谅磃臮\n");

	return 0;
}
