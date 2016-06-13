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
			printf("�п�J�n�i���إ��(1:��, 2:�R): ");
			scanf("%d", &oper);
		};

		if (oper == 1)
		{
			do
			{
				while (target > 3 || target < 1)
				{
					printf("�п�J�n��X��ذӫ~ID(1-%d): ", sizeof(stock)/sizeof(struct product));
					scanf("%d", &target);
				};

				printf("�п�J�n��X�h�ּƶq(�ثe�s�f: %s: %d): ", stock[target-1].name, stock[target-1].num);
				scanf("%d", &unit);

				if (unit > stock[target-1].num)
					printf("�s�f����(%s: %d)�A�������\n", stock[target-1].name, stock[target-1].num);
				else if (unit < 0)
					printf("�ƭȤ����T\n");
			} while (unit < 0 || unit > stock[target-1].num);
		}
		else
		{
			while (target > 3 || target < 1)
			{
				printf("�п�J�n�R�J��ذӫ~ID(1-%d): ", sizeof(stock)/sizeof(struct product));
				scanf("%d", &target);
			};

			do {
				printf("�п�J�n�R�J�h�ּƶq(�̦h�ʤJ: %d): ", capital/stock[target-1].cost);
				scanf("%d", &unit);

				if (capital < stock[target-1].cost * unit)
					printf("��������I\n");
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
		printf("\n�ثe����G%d\n",capital);

		flag:
		printf("�п�J�O�_�n�~����(1:�~��, 0:���}): ");
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
	printf("=====�ثe�ӫ~�ƶq=====\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s: %d\n", i+1, ptr->name, ptr->num);
		ptr++;
	}

	ptr = tmp;
	printf("=====�ثe�ӫ~���/����=====\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s: %d/%d\n", i+1, ptr->name, ptr->sale, ptr->cost);
		ptr++;
	}
}
