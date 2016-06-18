#include <stdlib.h>
#include <stdio.h>

struct SalesRData
{
	char SalesName[20];
	char SalesPosition[50];
};

struct Sales
{
	struct SalesRData SalesData;
	int ProductA;
	int ProductB;
	int ProductC;
	int Total;
};

void computeComIncome(struct Sales *saleptr, int salesNum)
{
	struct Sales *ptr = saleptr;
	int i;
	int pdA = 0, pdB = 0, pdC = 0;
	
	for (i = 0; i < salesNum; i++)
	{
		pdA += ptr->ProductA;
		pdB += ptr->ProductB;
		pdC += ptr->ProductC;
		ptr++;
	}
	
	extern int ProductIncome[3];
	
	ProductIncome[0] = pdA * 35;
	ProductIncome[1] = pdB * 14;
	ProductIncome[2] = pdC * 28;
	
	printf("=====公司各產品的銷售量及銷售額=====\n");
	printf("產品A的銷售數量%d個, 總銷售額%d元\n", pdA, ProductIncome[0]);
	printf("產品B的銷售數量%d個, 總銷售額%d元\n", pdB, ProductIncome[1]);
	printf("產品C的銷售數量%d個, 總銷售額%d元\n", pdC, ProductIncome[2]);	
}
