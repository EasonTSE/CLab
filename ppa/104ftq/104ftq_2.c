#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** generate(int** ptr, int row, int col);
int isExist(int n, int** ptr, int row, int col);
int random_number(int min_num, int max_num);
void printMatrix(int** ptr, int row, int col);

int main()
{
	srand(time(NULL));
	int row, col;
	printf("請輸入矩陣的列數(ROW): ");
	scanf("%d", &row);
	printf("請輸入矩陣的行數(COL): ");
	scanf("%d", &col);

	int** matrix;

	int** m;
	m = generate(matrix, row, col);
	printMatrix(m, row, col);

	int i;
	for (i = 0; i < row; i++)
		free(m[i]);
	free(m);

	return 0;
}

int** generate(int** ptr, int row, int col)
{
	int i, j;

	ptr = (int**) malloc(row * sizeof(int*));
	for (i = 0; i < row; i++)
		ptr[i] = (int*) malloc(col * sizeof(int));

	for(i = 0; i < row; i++)
		for(j = 0; j < col; j++)
			ptr[i][j] = 0;

	int rnum = random_number(1, row * col);

	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			while (isExist(rnum, ptr, row, col) == 1)
				rnum = random_number(1, row * col);
			ptr[i][j] = rnum;
		}
	return ptr;
}

int isExist(int n, int** ptr, int row, int col)
{
	int i,j;
	for (i = 0; i < row; i++)
		for(j = 0; j < col; j++)
			if (ptr[i][j] == n)
				return 1;

	return 0;
}

int random_number(int min_num, int max_num)
{
	int result = 0, low_num = 0, hi_num = 0;
	if(min_num < max_num)
	{
		low_num = min_num;
		hi_num = max_num + 1;
	}
	else
	{
		low_num = max_num + 1;
		hi_num = min_num;
	}
	result = (rand() % (hi_num - low_num)) + low_num;
	return result;
}

void printMatrix(int** ptr, int row, int col)
{
	printf("=====矩陣內容=====\n");
	int i, j;
	for (i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
			printf("%5d", *(*(ptr + i) + j));
		printf("\n");
	}
}
