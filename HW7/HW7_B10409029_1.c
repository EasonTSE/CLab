#include <stdio.h>
#include <stdlib.h>

int cal(struct product *product, int i);
void show_pd_num(struct product arr[]);

int main()
{
	struct product
	{
		int id;
		char name[10];
		int num;
		int sale;
		int cost;
	};
	
	struct product stock[3] = 
	{
		{1, "milk", 50, 30, 20},
		{2, "bread", 60, 70, 40},
		{3, "egg", 30, 20, 10}
	};
	
	int i, oper = 0, target = 0, vol = 0;
	show_pd_num(stock);
	
	printf("=====�ثe�ӫ~���/����=====\n");
	for (i = 0; i < 3; i++)
		printf("%d. %s: %d/%d\n", i+1, stock[i].name, stock[i].sale, stock[i].cost);
	
	while (oper != 1 || oper != 2)
	{
		printf("�п�J�n�i���إ��(1:��, 2:�R): ");
		scanf("%d", &oper);
	};

	while (target > 3 || target < 1)
	{
		printf("�п�J�n���ذӫ~ID: ");
		scanf("%d", &target);
	};
	
	while (vol < 0 || vol > stock[target-1].num)
	{
		printf("�п�J�n��h�ּƶq: ");
		scanf("%d", &vol);
	};
		 
	return 0;
}

void show_pd_num(struct product arr[])
{
	int i;
	struct product *ptr;
	printf("=====�ثe�ӫ~�ƶq=====\n");
	for (i = 0; i < 3; i++)
		printf("%d. %s: %d\n", i+1, ptr->name, ptr->num);
		ptr++;
}
