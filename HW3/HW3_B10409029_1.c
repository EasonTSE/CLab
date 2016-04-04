# include <stdio.h>
# include <stdlib.h>

int main()
{
	int total_row;

	do
	{
		printf("請輸入列數：");
		scanf("%d", &total_row);
	} while (total_row % 2 == 0);

	int row,space,star,median;

	median = (total_row + 1) / 2;

	int counter = median,rStar = 1;
	for (row = 1; row <= median; row++)
	{
		for (space = median - row; space >= 1; space--)
			printf(" ");
		for (star = 1; star <= row + median - counter; star++)
			printf("*");
		printf("\n");
		counter--;
	}
	for (row = median + 1; row <= total_row; row++)
	{
		for (space = row - median; space >= 1; space--)
			printf(" ");
		for (star = total_row - rStar++ * 2; star >= 1; star--)
			printf("*");
		printf("\n");
	}

	printf("請輸入列數：");
	scanf("%d", &total_row);

	for (row = 1; row <= total_row; row++)
	{
		for (space = total_row - row; space >= 1; space--)
			printf(" ");
		for (star = 1; star <= row; star++)
			printf("*");
		printf("\n");
	}

	return 0;
}
