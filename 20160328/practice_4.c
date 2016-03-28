# include <stdio.h>
# include <stdlib.h>

int main()
{
	int num, max = 0, count = 0;
	char ch;
	do
	{
		count = 0;
		printf("請輸入任一正整數：\n");
		scanf("%d", &num);
		while (num > 0)
		{
			count++;
			if (max <= num % 10)
				max = num % 10;
			num = num / 10;
		}
		printf("此數為%d位數，最大數字是：%d\n", count, max);
		fflush(stdin);
		printf("請輸入y繼續或其他字母離開。\n");
		scanf("%c", &ch);;
	} while (ch == 'y');
}
