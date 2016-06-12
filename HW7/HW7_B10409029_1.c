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
	
	printf("=====目前商品售價/成本=====\n");
	for (i = 0; i < 3; i++)
		printf("%d. %s: %d/%d\n", i+1, stock[i].name, stock[i].sale, stock[i].cost);
	
	while (oper != 1 || oper != 2)
	{
		printf("請輸入要進行何種交易(1:賣, 2:買): ");
		scanf("%d", &oper);
	};

	while (target > 3 || target < 1)
	{
		printf("請輸入要賣何種商品ID: ");
		scanf("%d", &target);
	};
	
	while (vol < 0 || vol > stock[target-1].num)
	{
		printf("請輸入要賣多少數量: ");
		scanf("%d", &vol);
	};
		 
	return 0;
}

void show_pd_num(struct product arr[])
{
	int i;
	struct product *ptr;
	printf("=====目前商品數量=====\n");
	for (i = 0; i < 3; i++)
		printf("%d. %s: %d\n", i+1, ptr->name, ptr->num);
		ptr++;
}
