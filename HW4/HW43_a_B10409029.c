#include <stdio.h>
#include <stdlib.h>

int iFibonacci(int);

int main()
{
	int num, oper;

	do {
		printf("請輸入要計算第幾項的值：（輸入<=0結束程式）");
		scanf("%d", &num);

		if (num <= 0)
			return 0;

		printf("iFibonacci(%d) = %d\n", num, iFibonacci(num));

	} while (num > 0);

	return 0;
}

int iFibonacci(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
	{
		int fib_minus2 = 0, fib_minus1 = 1, result;
		for (int i = 3; i <= n; i++)
		{
			result = fib_minus2 + fib_minus1;
			fib_minus2 = fib_minus1;
			fib_minus1 = result;
		}
		return result;
	}
}
