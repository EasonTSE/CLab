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
		printf("�P����m�W=>%s\n", ptr->SalesData.SalesName);
		printf("�P���¾��=>%s\n", ptr->SalesData.SalesPosition);
		printf("���~A���P��ƶq=>%d��\n", ptr->ProductA);
		printf("���~B���P��ƶq=>%d��\n", ptr->ProductB);
		printf("���~C���P��ƶq=>%d��\n", ptr->ProductC);
		printf("�`�P���B=>%d��\n", ptr->Total);
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
