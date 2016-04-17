#include <stdio.h>
#include <stdlib.h>

int rFibonacci(int);

int main()
{
	int num, oper;

	do {
		printf("�п�J�n�p��ĴX�����ȡG�]��J<=0�����{���^");
		scanf("%d", &num);

		if (num <= 0)
			return 0;

		printf("rFibonacci(%d) = %d\n", num, rFibonacci(num));

	} while (num > 0);

	return 0;
}

int rFibonacci(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return rFibonacci(n - 1) + rFibonacci(n - 2);
}
