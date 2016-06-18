#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void generate(int **ptr, int row, int col);
void initMatrix(int **ptr, int row, int col);
int isExist(int n, int **ptr, int row, int col);
int random_number(int min_num, int max_num);
void printMatrix(int **ptr, int row, int col);

int main()
{
	srand(time(NULL));
	int row, col;
	printf("請輸入矩陣的列數(ROW): ");
	scanf("%d", &row);
	printf("請輸入矩陣的行數(COL): ");
	scanf("%d", &col);

	int **matrix;
	int row_ptr_size = row * sizeof(*matrix);
	int row_elements_size = col * sizeof(**matrix);
	matrix = (int **) malloc(row_ptr_size + row * row_elements_size);
	initMatrix(matrix, row, col);
	generate(matrix, row, col);
	printMatrix(matrix, row, col);
	printf("main() after printed!\n");

	free(matrix);
	printf("free!\n");

	return 0;
}

void generate(int **ptr, int row, int col)
{
	int **addr = ptr;
	int i, j;
	int rnum = random_number(1, row*col);

	for (i = 0; i < row; i++)
	{
		printf("3\n");
		for (j = 0; j < col; j++)
		{
			printf("4\n");
			while (isExist(rnum, addr, row, col) == 1)
			{
				printf("5\n");
				rnum = random_number(1, row*col);
			};
			*(*(addr+i)+j) = rnum;
		}
	}
	printf("generated!\n");
}

void initMatrix(int **ptr, int row, int col)
{
	int i,j;
	for (i = 0; i < row; i++)
	{
		printf("10, i: %d\n", i);
		for(j = 0; j < col; j++)
		{
			printf("11, j: %d\n", j);
			*(*(ptr+i)+j) = 0;
			printf("12, *(*(ptr+%d)+%d): %d\n", i, j, *(*(ptr+i)+j));
		}
	}
	printf("initiated!\n");
}

int isExist(int n, int **ptr, int row, int col)
{
	int i,j;

	printf("6\n");

	for (i = 0; i < row; i++)
	{
		printf("7\n");
		for(j = 0; j < col; j++)
		{
			printf("8, n=%d, *(*(ptr+%d)+%d): %d\n", n, i, j, *(*(ptr+i)+j));
			if (*(*(ptr+i)+j) == n)
			{
				printf("9\n");
				return 1;
			}
		}
	}
	return 0;
}

int random_number(int min_num, int max_num)
{
    int result = 0, low_num = 0, hi_num = 0;
    if(min_num<max_num)
    {
        low_num = min_num;
        hi_num = max_num + 1;
    } else {
        low_num = max_num + 1;
        hi_num = min_num;
    }
    //srand(time(NULL));
    result = (rand() % (hi_num - low_num)) + low_num;
    printf("result: %d\n", result);
    return result;
}

void printMatrix(int **ptr, int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
			printf("%6d", *(*(ptr+i)+j));
		printf("\n");
	}
	printf("printed!\n");
}
