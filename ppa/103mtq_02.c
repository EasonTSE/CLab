# include <stdio.h>
# include <stdlib.h>
# include <time.h>

char isPrime(int);
int new_number(int);
int password(int);

int main()
{
	srand(time(NULL));

	int num;
	char oper;

	do {
		do {
			num = rand() % 10000;
		} while ((num < 1000 || num > 9999) || (isPrime(num) == 'N'));

		printf("��l�Ʀr�G%d\n", num);
		//printf("new_number: %d\n", new_number(num));
		printf("�K�X�G%d\n", password(new_number(num)));

		printf("�O�_�~�򲣥ͱK�X(��J0�{������)�G");
		scanf(" %c", &oper);
	} while (oper != '0');

	return 0;
}

char isPrime(int n)
{
	for(int i = 2; i < n; i++)
		if (n % i == 0)
			return 'N';
	return 'Y';
}

int new_number(int num)
{
	int n1 = num / 1000;
	int n2 = num % 1000 / 100;
	int n3 = num % 100 / 10;
	int n4 = num % 10;

	if (n1 < n4)
		return n4 * 1000 + n2 * 100 + n3 * 10 + n1;
	else if (n1 == n4)
		return 8 * 1000 + n2 * 100 + n3 * 10 + 8;
	else
		return num;
}

int password(int num)
{
	for (int i = num; i > 0; i--)
		if (i % 4 == 0 && i % 6 == 0)
			return i;
}
