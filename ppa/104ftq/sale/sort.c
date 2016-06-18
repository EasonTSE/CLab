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

void printSales(struct Sales *salePtr, int SalesNum)
{
	struct Sales *ptr = salePtr;
	int i;
	for (i = 0; i < SalesNum; i++)
	{
		printf("銷售員姓名=>%s\n", ptr->SalesData.SalesName);
		printf("銷售員職位=>%s\n", ptr->SalesData.SalesPosition);
		printf("產品A的銷售數量=>%d個\n", ptr->ProductA);
		printf("產品B的銷售數量=>%d個\n", ptr->ProductB);
		printf("產品C的銷售數量=>%d個\n", ptr->ProductC);
		printf("總銷售額=>%d元\n", ptr->Total);
		printf("\n");
		ptr++;
	}

}

void sort(struct Sales *salePtr, int SalesNum)
{
	struct Sales *ptr = salePtr;
	int i, j;
	struct Sales tmp;
	
	for (i = 0; i < SalesNum - 1; i++) 
	{
		for (j = 0; j < SalesNum - 1 - i; j++)
			if(ptr->Total < (ptr+1)->Total)
			{
				tmp = *ptr;
				*ptr = *(ptr+1);
				*(ptr+1) = tmp;
			}
		ptr++;
	}
}
