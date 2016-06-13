#include <stdio.h>
#include <stdlib.h>

struct product
{
	int id;
	char name[10];
	int num;
	int sale;
	int cost;
};

int cal(struct product *, int, int, int);
void show_pd_info(struct product *);

int main()
{
	struct product stock[3] =
	{
		{1, "milk", 50, 30, 20},
		{2, "bread", 60, 70, 40},
		{3, "egg", 30, 20, 10}
	};

	struct product *ptr = stock;


	int i, action = 0, oper = 0, target = 0, unit = 0, capital = 0;

	do
	{
		show_pd_info(ptr);

		while (oper < 1 || oper > 2)
		{
			printf("請輸入要進行何種交易(1:賣, 2:買): ");
			scanf("%d", &oper);
		};

		if (oper == 1)
		{
			do
			{
				while (target > 3 || target < 1)
				{
					printf("請輸入要賣出何種商品ID(1-%d): ", sizeof(stock)/sizeof(struct product));
					scanf("%d", &target);
				};

				printf("請輸入要賣出多少數量(目前存貨: %s: %d): ", stock[target-1].name, stock[target-1].num);
				scanf("%d", &unit);

				if (unit > stock[target-1].num)
					printf("存貨不足(%s: %d)，交易失敗\n", stock[target-1].name, stock[target-1].num);
				else if (unit < 0)
					printf("數值不正確\n");
			} while (unit < 0 || unit > stock[target-1].num);
		}
		else
		{
			while (target > 3 || target < 1)
			{
				printf("請輸入要買入何種商品ID(1-%d): ", sizeof(stock)/sizeof(struct product));
				scanf("%d", &target);
			};

			do {
				printf("請輸入要買入多少數量(最多購入: %d): ", capital/stock[target-1].cost);
				scanf("%d", &unit);

				if (capital < stock[target-1].cost * unit)
					printf("資金不足！\n");
			} while(capital < stock[target-1].cost * unit);
		}

		struct product *tmp = ptr;
		for (i = 0; i < 3; i++)
		{
			if (i == target-1)
			{
				capital += cal(ptr, oper, unit, capital);
				break;
			}
			ptr++;
		}
		ptr = tmp;

		show_pd_info(ptr);
		printf("\n目前資金：%d\n",capital);

		flag:
		printf("請輸入是否要繼續交易(1:繼續, 0:離開): ");
		scanf("%d", &action);

		if (action == 0 || action == 1)
			oper = 0, target = 0, unit = 0;
		else
			goto flag;

	} while(action != 0);

	return 0;
}

int cal(struct product *ptr, int oper, int n, int capital)
{
	if (oper == 1)
	{
			printf("A1\n");
			ptr->num -= n;
			printf("%s: %d\n", ptr->name, ptr->num);
			return ptr->sale * n;
	}
	else
	{
			ptr->num += n;
			return ptr->cost * n * (-1);
	}
}

void show_pd_info(struct product *ptr)
{
	int i;
	struct product *tmp = ptr;
	printf("=====目前商品數量=====\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s: %d\n", i+1, ptr->name, ptr->num);
		ptr++;
	}

	ptr = tmp;
	printf("=====目前商品售價/成本=====\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s: %d/%d\n", i+1, ptr->name, ptr->sale, ptr->cost);
		ptr++;
	}
}
