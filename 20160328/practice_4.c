# include <stdio.h>
# include <stdlib.h>

int main()
{
	int num, max = 0, count = 0;
	char ch;
	do
	{
		count = 0;
		printf("�п�J���@����ơG\n");
		scanf("%d", &num);
		while (num > 0)
		{
			count++;
			if (max <= num % 10)
				max = num % 10;
			num = num / 10;
		}
		printf("���Ƭ�%d��ơA�̤j�Ʀr�O�G%d\n", count, max);
		fflush(stdin);
		printf("�п�Jy�~��Ψ�L�r�����}�C\n");
		scanf("%c", &ch);;
	} while (ch == 'y');
}
